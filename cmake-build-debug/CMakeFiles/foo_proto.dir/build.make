# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
CMAKE_COMMAND = /snap/clion/138/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/138/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/r2d2/CLionProjects/proto

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/r2d2/CLionProjects/proto/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/foo_proto.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/foo_proto.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/foo_proto.dir/flags.make

foo.pb.h: ../protocol/foo.proto
foo.pb.h: /usr/bin/protoc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/r2d2/CLionProjects/proto/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Running cpp protocol buffer compiler on protocol/foo.proto"
	/usr/bin/protoc --cpp_out /home/r2d2/CLionProjects/proto/cmake-build-debug -I /home/r2d2/CLionProjects/proto/protocol /home/r2d2/CLionProjects/proto/protocol/foo.proto

foo.pb.cc: foo.pb.h
	@$(CMAKE_COMMAND) -E touch_nocreate foo.pb.cc

CMakeFiles/foo_proto.dir/foo.pb.cc.o: CMakeFiles/foo_proto.dir/flags.make
CMakeFiles/foo_proto.dir/foo.pb.cc.o: foo.pb.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/r2d2/CLionProjects/proto/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/foo_proto.dir/foo.pb.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/foo_proto.dir/foo.pb.cc.o -c /home/r2d2/CLionProjects/proto/cmake-build-debug/foo.pb.cc

CMakeFiles/foo_proto.dir/foo.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/foo_proto.dir/foo.pb.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/r2d2/CLionProjects/proto/cmake-build-debug/foo.pb.cc > CMakeFiles/foo_proto.dir/foo.pb.cc.i

CMakeFiles/foo_proto.dir/foo.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/foo_proto.dir/foo.pb.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/r2d2/CLionProjects/proto/cmake-build-debug/foo.pb.cc -o CMakeFiles/foo_proto.dir/foo.pb.cc.s

# Object files for target foo_proto
foo_proto_OBJECTS = \
"CMakeFiles/foo_proto.dir/foo.pb.cc.o"

# External object files for target foo_proto
foo_proto_EXTERNAL_OBJECTS =

libfoo_proto.a: CMakeFiles/foo_proto.dir/foo.pb.cc.o
libfoo_proto.a: CMakeFiles/foo_proto.dir/build.make
libfoo_proto.a: CMakeFiles/foo_proto.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/r2d2/CLionProjects/proto/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libfoo_proto.a"
	$(CMAKE_COMMAND) -P CMakeFiles/foo_proto.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/foo_proto.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/foo_proto.dir/build: libfoo_proto.a

.PHONY : CMakeFiles/foo_proto.dir/build

CMakeFiles/foo_proto.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/foo_proto.dir/cmake_clean.cmake
.PHONY : CMakeFiles/foo_proto.dir/clean

CMakeFiles/foo_proto.dir/depend: foo.pb.h
CMakeFiles/foo_proto.dir/depend: foo.pb.cc
	cd /home/r2d2/CLionProjects/proto/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/r2d2/CLionProjects/proto /home/r2d2/CLionProjects/proto /home/r2d2/CLionProjects/proto/cmake-build-debug /home/r2d2/CLionProjects/proto/cmake-build-debug /home/r2d2/CLionProjects/proto/cmake-build-debug/CMakeFiles/foo_proto.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/foo_proto.dir/depend

