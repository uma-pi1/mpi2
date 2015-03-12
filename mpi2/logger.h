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


#ifndef MPI2_LOGGER_H
#define MPI2_LOGGER_H

#include <log4cxx/logger.h>
#include <log4cxx/mdc.h>

#include <mpi2/task.h>
#include <rg/io.h>
#include <rg/evaluation/timeval.h>

namespace mpi2 {

namespace detail {
extern log4cxx::LoggerPtr logger;
extern log4cxx::LoggerPtr eventLogger;

inline void logEvent(const std::string& type, const std::string& event){
	if (detail::eventLogger->isInfoEnabled()) {
		log4cxx::MDC mdc1("eventtype", type);
		timeval t;
		gettimeofday(&t, 0);
		uint64_t nanos = rg::detail::timevalToNanos(t);
		log4cxx::MDC mdc2("nanotime", rg::paste(nanos));
		LOG4CXX_INFO(detail::eventLogger, event);
	}
}

}

inline void logBeginEvent(const std::string& event){
	detail::logEvent("+", event);
}

inline void logEndEvent(const std::string& event){
	detail::logEvent("-", event);
}

inline void logEvent(const std::string& location, const std::string& event){
	detail::logEvent("=", event);
}

}

#endif
