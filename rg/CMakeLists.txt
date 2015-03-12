# check for include files
include(CheckIncludeFiles)
check_include_files(inttypes.h HAVE_INTTYPES_H)
check_include_files(stdint.h HAVE_STDINT_H)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h)

# define source files
set(librg_SRCS
	exception/Exception.cc
)

# define main header files
set(librg_HDRS
	evaluation.h
	exception.h
#	hash.h
	io.h
#	math.h
	random.h
	sampling.h
)

# define additional headers
set(librg_evaluation_HDRS
	evaluation/benchmark.h
    evaluation/duration.h
    evaluation/formatting.h
	evaluation/Timer.h
	evaluation/timeval.h
)
set(librg_exception_HDRS
	exception/Exception.h	
)
#set(librg_hash_HDRS
#	hash/Hash.h
#	hash/IdentityHash.h
#	hash/LinearCongruentialHash.h
#)
set(librg_io_HDRS
	io/convert.h
	io/iostream.h
    io/manipulator.h
	io/utils.h
)
#set(librg_math_HDRS
#    math/functions.h
#)
set(librg_portability_HDRS
	portability/inttypes.h
	portability/time.h
)
set(librg_random_HDRS
	random/RandomWrapper.h
	random/sequential.h
	random/shuffle.h
)
set(librg_sampling_HDRS
    sampling/Aggregator.h
    sampling/Sample.h
    sampling/ReservoirSample.h
)

# combine to all headers 
set(librg_all_HDRS
	${librg_HDRS}
	${librg_evaluation_HDRS}
	${librg_exception_HDRS}
#	${librg_hash_HDRS}
	${librg_io_HDRS}
#	${librg_math_HDRS}
	${librg_portability_HDRS}
	${librg_random_HDRS}
	${librg_sampling_HDRS}
)

# add library targes
add_library(rg SHARED ${librg_all_HDRS} ${librg_SRCS}) 

# link with boost
target_link_libraries(rg ${Boost_LIBRARIES})

# install library and main headers
install(TARGETS rg DESTINATION ${LIB_INSTALL_DIR})
install(FILES ${librg_HDRS} DESTINATION ${INCLUDE_INSTALL_DIR}/rg)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/config.h DESTINATION ${INCLUDE_INSTALL_DIR}/rg) 

# install additional headers
install(FILES ${librg_evaluation_HDRS} DESTINATION ${INCLUDE_INSTALL_DIR}/rg/evaluation)
install(FILES ${librg_exception_HDRS} DESTINATION ${INCLUDE_INSTALL_DIR}/rg/exception)
#install(FILES ${librg_hash_HDRS} DESTINATION ${INCLUDE_INSTALL_DIR}/rg/hash)
install(FILES ${librg_io_HDRS} DESTINATION ${INCLUDE_INSTALL_DIR}/rg/io)
#install(FILES ${librg_math_HDRS} DESTINATION ${INCLUDE_INSTALL_DIR}/rg/math)
install(FILES ${librg_portability_HDRS} DESTINATION ${INCLUDE_INSTALL_DIR}/rg/portability)
install(FILES ${librg_random_HDRS} DESTINATION ${INCLUDE_INSTALL_DIR}/rg/random)
install(FILES ${librg_sampling_HDRS} DESTINATION ${INCLUDE_INSTALL_DIR}/rg/sampling)
