# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.23

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2022.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2022.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\dsz\CLionProjects\cDemo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\dsz\CLionProjects\cDemo\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CMakeLists.txt.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/CMakeLists.txt.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/CMakeLists.txt.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CMakeLists.txt.dir/flags.make

CMakeFiles/CMakeLists.txt.dir/printStar.c.obj: CMakeFiles/CMakeLists.txt.dir/flags.make
CMakeFiles/CMakeLists.txt.dir/printStar.c.obj: ../printStar.c
CMakeFiles/CMakeLists.txt.dir/printStar.c.obj: CMakeFiles/CMakeLists.txt.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\dsz\CLionProjects\cDemo\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/CMakeLists.txt.dir/printStar.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/CMakeLists.txt.dir/printStar.c.obj -MF CMakeFiles\CMakeLists.txt.dir\printStar.c.obj.d -o CMakeFiles\CMakeLists.txt.dir\printStar.c.obj -c C:\Users\dsz\CLionProjects\cDemo\printStar.c

CMakeFiles/CMakeLists.txt.dir/printStar.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CMakeLists.txt.dir/printStar.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\dsz\CLionProjects\cDemo\printStar.c > CMakeFiles\CMakeLists.txt.dir\printStar.c.i

CMakeFiles/CMakeLists.txt.dir/printStar.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CMakeLists.txt.dir/printStar.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\dsz\CLionProjects\cDemo\printStar.c -o CMakeFiles\CMakeLists.txt.dir\printStar.c.s

# Object files for target CMakeLists.txt
CMakeLists_txt_OBJECTS = \
"CMakeFiles/CMakeLists.txt.dir/printStar.c.obj"

# External object files for target CMakeLists.txt
CMakeLists_txt_EXTERNAL_OBJECTS =

CMakeLists.txt.exe: CMakeFiles/CMakeLists.txt.dir/printStar.c.obj
CMakeLists.txt.exe: CMakeFiles/CMakeLists.txt.dir/build.make
CMakeLists.txt.exe: CMakeFiles/CMakeLists.txt.dir/linklibs.rsp
CMakeLists.txt.exe: CMakeFiles/CMakeLists.txt.dir/objects1.rsp
CMakeLists.txt.exe: CMakeFiles/CMakeLists.txt.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\dsz\CLionProjects\cDemo\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable CMakeLists.txt.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CMakeLists.txt.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CMakeLists.txt.dir/build: CMakeLists.txt.exe
.PHONY : CMakeFiles/CMakeLists.txt.dir/build

CMakeFiles/CMakeLists.txt.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CMakeLists.txt.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CMakeLists.txt.dir/clean

CMakeFiles/CMakeLists.txt.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\dsz\CLionProjects\cDemo C:\Users\dsz\CLionProjects\cDemo C:\Users\dsz\CLionProjects\cDemo\cmake-build-debug C:\Users\dsz\CLionProjects\cDemo\cmake-build-debug C:\Users\dsz\CLionProjects\cDemo\cmake-build-debug\CMakeFiles\CMakeLists.txt.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CMakeLists.txt.dir/depend

