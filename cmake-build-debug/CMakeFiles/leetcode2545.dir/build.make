# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/dsz/Desktop/code/cDemo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/dsz/Desktop/code/cDemo/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/leetcode2545.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/leetcode2545.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/leetcode2545.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/leetcode2545.dir/flags.make

CMakeFiles/leetcode2545.dir/leetcode2545.c.o: CMakeFiles/leetcode2545.dir/flags.make
CMakeFiles/leetcode2545.dir/leetcode2545.c.o: /Users/dsz/Desktop/code/cDemo/leetcode2545.c
CMakeFiles/leetcode2545.dir/leetcode2545.c.o: CMakeFiles/leetcode2545.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dsz/Desktop/code/cDemo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/leetcode2545.dir/leetcode2545.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/leetcode2545.dir/leetcode2545.c.o -MF CMakeFiles/leetcode2545.dir/leetcode2545.c.o.d -o CMakeFiles/leetcode2545.dir/leetcode2545.c.o -c /Users/dsz/Desktop/code/cDemo/leetcode2545.c

CMakeFiles/leetcode2545.dir/leetcode2545.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/leetcode2545.dir/leetcode2545.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/dsz/Desktop/code/cDemo/leetcode2545.c > CMakeFiles/leetcode2545.dir/leetcode2545.c.i

CMakeFiles/leetcode2545.dir/leetcode2545.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/leetcode2545.dir/leetcode2545.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/dsz/Desktop/code/cDemo/leetcode2545.c -o CMakeFiles/leetcode2545.dir/leetcode2545.c.s

# Object files for target leetcode2545
leetcode2545_OBJECTS = \
"CMakeFiles/leetcode2545.dir/leetcode2545.c.o"

# External object files for target leetcode2545
leetcode2545_EXTERNAL_OBJECTS =

leetcode2545: CMakeFiles/leetcode2545.dir/leetcode2545.c.o
leetcode2545: CMakeFiles/leetcode2545.dir/build.make
leetcode2545: CMakeFiles/leetcode2545.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/dsz/Desktop/code/cDemo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable leetcode2545"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/leetcode2545.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/leetcode2545.dir/build: leetcode2545
.PHONY : CMakeFiles/leetcode2545.dir/build

CMakeFiles/leetcode2545.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/leetcode2545.dir/cmake_clean.cmake
.PHONY : CMakeFiles/leetcode2545.dir/clean

CMakeFiles/leetcode2545.dir/depend:
	cd /Users/dsz/Desktop/code/cDemo/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/dsz/Desktop/code/cDemo /Users/dsz/Desktop/code/cDemo /Users/dsz/Desktop/code/cDemo/cmake-build-debug /Users/dsz/Desktop/code/cDemo/cmake-build-debug /Users/dsz/Desktop/code/cDemo/cmake-build-debug/CMakeFiles/leetcode2545.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/leetcode2545.dir/depend

