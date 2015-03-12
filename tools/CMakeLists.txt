link_libraries(${Boost_LIBRARIES} ${RG_LIBRARIES} mpi2 log4cxx)
file(COPY "${MPI2_SOURCE_DIR}/log4j.properties" DESTINATION "${CMAKE_CURRENT_BINARY_DIR}/")
file(COPY "mpi2.R" DESTINATION "${CMAKE_CURRENT_BINARY_DIR}/")
file(COPY "mpi2-parse-events.sh" DESTINATION "${CMAKE_CURRENT_BINARY_DIR}/")
file(COPY "mpi2-plot-events.sh" DESTINATION "${CMAKE_CURRENT_BINARY_DIR}/")

