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



/** \file
 *
 * Methods for initializing the mpi2 library. */

#ifndef MPI2_INIT_H
#define MPI2_INIT_H

#include <boost/mpi/communicator.hpp>

namespace mpi2 {

/** Initialize the mpi2 library with the provided command line arguments. Fires up MPI.
 *
 * @returns an MPI communicator for the MPI cluster
 */
boost::mpi::communicator& mpi2init(int& argc, char**& argv);

/** Fire up a local task manager. On rank 0, the method returns immediately (if needed, i.e., if
 * mpi2 runs in distributed mode, a separate thread is allocated for the task manager).
 * On all other ranks, the task manager is started in the current thread and method blocks until
 * the task manager is shutdown (via a call to mpi2Stop() from rank 0).
 *
 * @param pollDelay if the task manager does not receive a message, wait this many microseconds
 *                  before polling again (only affects distributed mode)
 */
void mpi2start(unsigned pollDelay = 500);

/** Shuts down all task managers on all ranks. */
void mpi2stop();

/** Shuts down mpi2 and MPI. */
void mpi2finalize();

}

#endif
