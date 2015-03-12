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


#ifndef RG_SAMPLING_SAMPLE_H
#define RG_SAMPLING_SAMPLE_H

#include <rg/config.h>

#include <rg/sampling/Aggregator.h>

namespace rg { 

/** Interface for a sample. A sample is a subset of the data that is
 * (usually) selected randomly.
 *
 * In addition to the methods given here, most sample provide constant
 * input iterators via begin() and end() methods.  
 */
template <class T>
struct Sample : public Aggregator <T> {
public:
	/** Returns the sample size (including duplicates).
	 * 
	 * @return the sample size (including duplicates) */
	int size() const;	
};
	
} // namespace
	
#endif 
