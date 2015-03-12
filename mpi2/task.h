//    Copyright 2015 Rainer Gemulla
// 
//    Licensed under the Apache License, Version 2.0 (the "License");
//    you may not use this file except in compliance with the License.
//    You may obtain a copy of the License at
// 
//        http://www.apache.org/licenses/LICENSE-2.0
// 
//    Unless required by applicable law or agreed to in writing, software
//    distributed under the License is distributed on an "AS IS" BASIS,
//    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//    See the License for the specific language governing permissions and
//    limitations under the License.



#ifndef MPI2_TASK_H
#define MPI2_TASK_H

#include <boost/function.hpp>

#include <mpi2/channel.h>

namespace mpi2 {

// -- Definition of a task -----------------------------------------------------------------------

/** Information passed to a newly spawned task. Contains information about all
 * other tasks spawned in the same task group. */
class TaskInfo {
public:
	/** Number of tasked spawned in the task group. */
	int groupSize() const { return groupSize_; }

	/** Number of the current task in its task group. */
	int groupId() const { return groupId_; }

	bool hasPairwiseChannels() {
		return pairwiseChannels_.size() > 0;
	}

	std::vector<Channel>& pairwiseChannels() {
		return pairwiseChannels_;
	}

private:
	TaskInfo(int groupSize = 1, int groupId = 0)
	: groupSize_(groupSize), groupId_(groupId), pairwiseChannels_() {
	}

	TaskInfo(int groupSize, int groupId, const std::vector<Channel>& pairwiseChannels)
	: groupSize_(groupSize), groupId_(groupId), pairwiseChannels_(pairwiseChannels) {
	}

	friend class TaskManager;
	const int groupSize_;
	const int groupId_;
	std::vector<Channel> pairwiseChannels_;
};

/** Type of a task. A task is a function that takes a Channel that allows communication with
 * the spawner of the task. It also takes a TaskInfo object that provides additional information
 * (may depend on how the task is spawned).
 */
typedef boost::function<void (Channel ch, TaskInfo info)> Task;

/** Identifiers for tasks. Each task in mpi2 has a unique identifier of this type. */
typedef std::string TaskId;

}

#endif

