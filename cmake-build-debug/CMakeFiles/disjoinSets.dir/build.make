# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.8

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Users\tillera\AppData\Roaming\JetBrains\CLion 2017.1.2\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Users\tillera\AppData\Roaming\JetBrains\CLion 2017.1.2\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\tillera\ClionProjects\disjoinSets

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\tillera\ClionProjects\disjoinSets\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/disjoinSets.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/disjoinSets.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/disjoinSets.dir/flags.make

CMakeFiles/disjoinSets.dir/main.cpp.obj: CMakeFiles/disjoinSets.dir/flags.make
CMakeFiles/disjoinSets.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\tillera\ClionProjects\disjoinSets\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/disjoinSets.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\disjoinSets.dir\main.cpp.obj -c C:\Users\tillera\ClionProjects\disjoinSets\main.cpp

CMakeFiles/disjoinSets.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/disjoinSets.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\tillera\ClionProjects\disjoinSets\main.cpp > CMakeFiles\disjoinSets.dir\main.cpp.i

CMakeFiles/disjoinSets.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/disjoinSets.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\tillera\ClionProjects\disjoinSets\main.cpp -o CMakeFiles\disjoinSets.dir\main.cpp.s

CMakeFiles/disjoinSets.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/disjoinSets.dir/main.cpp.obj.requires

CMakeFiles/disjoinSets.dir/main.cpp.obj.provides: CMakeFiles/disjoinSets.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\disjoinSets.dir\build.make CMakeFiles/disjoinSets.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/disjoinSets.dir/main.cpp.obj.provides

CMakeFiles/disjoinSets.dir/main.cpp.obj.provides.build: CMakeFiles/disjoinSets.dir/main.cpp.obj


# Object files for target disjoinSets
disjoinSets_OBJECTS = \
"CMakeFiles/disjoinSets.dir/main.cpp.obj"

# External object files for target disjoinSets
disjoinSets_EXTERNAL_OBJECTS =

disjoinSets.exe: CMakeFiles/disjoinSets.dir/main.cpp.obj
disjoinSets.exe: CMakeFiles/disjoinSets.dir/build.make
disjoinSets.exe: CMakeFiles/disjoinSets.dir/linklibs.rsp
disjoinSets.exe: CMakeFiles/disjoinSets.dir/objects1.rsp
disjoinSets.exe: CMakeFiles/disjoinSets.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\tillera\ClionProjects\disjoinSets\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable disjoinSets.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\disjoinSets.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/disjoinSets.dir/build: disjoinSets.exe

.PHONY : CMakeFiles/disjoinSets.dir/build

CMakeFiles/disjoinSets.dir/requires: CMakeFiles/disjoinSets.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/disjoinSets.dir/requires

CMakeFiles/disjoinSets.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\disjoinSets.dir\cmake_clean.cmake
.PHONY : CMakeFiles/disjoinSets.dir/clean

CMakeFiles/disjoinSets.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\tillera\ClionProjects\disjoinSets C:\Users\tillera\ClionProjects\disjoinSets C:\Users\tillera\ClionProjects\disjoinSets\cmake-build-debug C:\Users\tillera\ClionProjects\disjoinSets\cmake-build-debug C:\Users\tillera\ClionProjects\disjoinSets\cmake-build-debug\CMakeFiles\disjoinSets.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/disjoinSets.dir/depend

