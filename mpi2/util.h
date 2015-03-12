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


#ifndef MPI2_UTIL_H
#define MPI2_UTIL_H

namespace mpi2 {

typedef unsigned long PointerIntType;

template<typename T>
PointerIntType pointerToInt(T* p) {
	return (PointerIntType)p;
}

template<typename T>
T* intToPointer(PointerIntType i) {
	return (T*)i;
}


/** Splits the numbers [0,n-1] into p partitions. Returns a vector x of length p+1 such that
 * partition i is given by [p[i], p[i+1]).
 *
 * @param n
 * @param p
 * @return
 */
template<typename I>
inline std::vector<I> split(I n, int p) {
	std::vector<I> result(p+1, (I)0);
	I np = n / p;
	I mp = n % p;
	I pos = 0;
	for (int i=0; i<=p; i++) {
		result[i] = pos;
		pos += np;
		if (mp > 0) {
			pos++;
			mp--;
		}
	}
	return result;
}

}

#endif
