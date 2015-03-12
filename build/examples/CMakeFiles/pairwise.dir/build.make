# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/chteflio/workspace/mpi2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/chteflio/workspace/mpi2/build

# Include any dependencies generated for this target.
include examples/CMakeFiles/pairwise.dir/depend.make

# Include the progress variables for this target.
include examples/CMakeFiles/pairwise.dir/progress.make

# Include the compile flags for this target's objects.
include examples/CMakeFiles/pairwise.dir/flags.make

examples/CMakeFiles/pairwise.dir/pairwise.cc.o: examples/CMakeFiles/pairwise.dir/flags.make
examples/CMakeFiles/pairwise.dir/pairwise.cc.o: ../examples/pairwise.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/chteflio/workspace/mpi2/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object examples/CMakeFiles/pairwise.dir/pairwise.cc.o"
	cd /home/chteflio/workspace/mpi2/build/examples && ccache mpicxx  $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/pairwise.dir/pairwise.cc.o -c /home/chteflio/workspace/mpi2/examples/pairwise.cc

examples/CMakeFiles/pairwise.dir/pairwise.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pairwise.dir/pairwise.cc.i"
	cd /home/chteflio/workspace/mpi2/build/examples && ccache mpicxx $(CXX_DEFINES) $(CXX_FLAGS) -E /home/chteflio/workspace/mpi2/examples/pairwise.cc > CMakeFiles/pairwise.dir/pairwise.cc.i

examples/CMakeFiles/pairwise.dir/pairwise.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pairwise.dir/pairwise.cc.s"
	cd /home/chteflio/workspace/mpi2/build/examples && ccache mpicxx $(CXX_DEFINES) $(CXX_FLAGS) -S /home/chteflio/workspace/mpi2/examples/pairwise.cc -o CMakeFiles/pairwise.dir/pairwise.cc.s

examples/CMakeFiles/pairwise.dir/pairwise.cc.o.requires:
.PHONY : examples/CMakeFiles/pairwise.dir/pairwise.cc.o.requires

examples/CMakeFiles/pairwise.dir/pairwise.cc.o.provides: examples/CMakeFiles/pairwise.dir/pairwise.cc.o.requires
	$(MAKE) -f examples/CMakeFiles/pairwise.dir/build.make examples/CMakeFiles/pairwise.dir/pairwise.cc.o.provides.build
.PHONY : examples/CMakeFiles/pairwise.dir/pairwise.cc.o.provides

examples/CMakeFiles/pairwise.dir/pairwise.cc.o.provides.build: examples/CMakeFiles/pairwise.dir/pairwise.cc.o

# Object files for target pairwise
pairwise_OBJECTS = \
"CMakeFiles/pairwise.dir/pairwise.cc.o"

# External object files for target pairwise
pairwise_EXTERNAL_OBJECTS =

examples/pairwise: examples/CMakeFiles/pairwise.dir/pairwise.cc.o
examples/pairwise: examples/CMakeFiles/pairwise.dir/build.make
examples/pairwise: /home/chteflio/localW/lib/libboost_serialization.so
examples/pairwise: /home/chteflio/localW/lib/libboost_mpi.so
examples/pairwise: /home/chteflio/localW/lib/libboost_thread.so
examples/pairwise: /home/chteflio/localW/lib/libboost_program_options.so
examples/pairwise: /home/chteflio/localW/lib/libboost_regex.so
examples/pairwise: /home/chteflio/localW/lib/libboost_filesystem.so
examples/pairwise: /home/chteflio/localW/lib/libboost_chrono.so
examples/pairwise: rg/librg.so
examples/pairwise: mpi2/libmpi2.so
examples/pairwise: /home/chteflio/localW/lib/libboost_serialization.so
examples/pairwise: /home/chteflio/localW/lib/libboost_mpi.so
examples/pairwise: /home/chteflio/localW/lib/libboost_thread.so
examples/pairwise: /home/chteflio/localW/lib/libboost_program_options.so
examples/pairwise: /home/chteflio/localW/lib/libboost_regex.so
examples/pairwise: /home/chteflio/localW/lib/libboost_filesystem.so
examples/pairwise: /home/chteflio/localW/lib/libboost_chrono.so
examples/pairwise: examples/CMakeFiles/pairwise.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable pairwise"
	cd /home/chteflio/workspace/mpi2/build/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pairwise.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/CMakeFiles/pairwise.dir/build: examples/pairwise
.PHONY : examples/CMakeFiles/pairwise.dir/build

examples/CMakeFiles/pairwise.dir/requires: examples/CMakeFiles/pairwise.dir/pairwise.cc.o.requires
.PHONY : examples/CMakeFiles/pairwise.dir/requires

examples/CMakeFiles/pairwise.dir/clean:
	cd /home/chteflio/workspace/mpi2/build/examples && $(CMAKE_COMMAND) -P CMakeFiles/pairwise.dir/cmake_clean.cmake
.PHONY : examples/CMakeFiles/pairwise.dir/clean

examples/CMakeFiles/pairwise.dir/depend:
	cd /home/chteflio/workspace/mpi2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/chteflio/workspace/mpi2 /home/chteflio/workspace/mpi2/examples /home/chteflio/workspace/mpi2/build /home/chteflio/workspace/mpi2/build/examples /home/chteflio/workspace/mpi2/build/examples/CMakeFiles/pairwise.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/CMakeFiles/pairwise.dir/depend
