# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/usuario/practicas/P09-functions2/capitalize_vowels

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/usuario/practicas/P09-functions2/capitalize_vowels/build

# Include any dependencies generated for this target.
include CMakeFiles/capitalize_vowels.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/capitalize_vowels.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/capitalize_vowels.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/capitalize_vowels.dir/flags.make

CMakeFiles/capitalize_vowels.dir/capitalize_vowels.cc.o: CMakeFiles/capitalize_vowels.dir/flags.make
CMakeFiles/capitalize_vowels.dir/capitalize_vowels.cc.o: /home/usuario/practicas/P09-functions2/capitalize_vowels/capitalize_vowels.cc
CMakeFiles/capitalize_vowels.dir/capitalize_vowels.cc.o: CMakeFiles/capitalize_vowels.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/usuario/practicas/P09-functions2/capitalize_vowels/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/capitalize_vowels.dir/capitalize_vowels.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/capitalize_vowels.dir/capitalize_vowels.cc.o -MF CMakeFiles/capitalize_vowels.dir/capitalize_vowels.cc.o.d -o CMakeFiles/capitalize_vowels.dir/capitalize_vowels.cc.o -c /home/usuario/practicas/P09-functions2/capitalize_vowels/capitalize_vowels.cc

CMakeFiles/capitalize_vowels.dir/capitalize_vowels.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/capitalize_vowels.dir/capitalize_vowels.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usuario/practicas/P09-functions2/capitalize_vowels/capitalize_vowels.cc > CMakeFiles/capitalize_vowels.dir/capitalize_vowels.cc.i

CMakeFiles/capitalize_vowels.dir/capitalize_vowels.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/capitalize_vowels.dir/capitalize_vowels.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usuario/practicas/P09-functions2/capitalize_vowels/capitalize_vowels.cc -o CMakeFiles/capitalize_vowels.dir/capitalize_vowels.cc.s

# Object files for target capitalize_vowels
capitalize_vowels_OBJECTS = \
"CMakeFiles/capitalize_vowels.dir/capitalize_vowels.cc.o"

# External object files for target capitalize_vowels
capitalize_vowels_EXTERNAL_OBJECTS =

capitalize_vowels: CMakeFiles/capitalize_vowels.dir/capitalize_vowels.cc.o
capitalize_vowels: CMakeFiles/capitalize_vowels.dir/build.make
capitalize_vowels: CMakeFiles/capitalize_vowels.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/usuario/practicas/P09-functions2/capitalize_vowels/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable capitalize_vowels"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/capitalize_vowels.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/capitalize_vowels.dir/build: capitalize_vowels
.PHONY : CMakeFiles/capitalize_vowels.dir/build

CMakeFiles/capitalize_vowels.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/capitalize_vowels.dir/cmake_clean.cmake
.PHONY : CMakeFiles/capitalize_vowels.dir/clean

CMakeFiles/capitalize_vowels.dir/depend:
	cd /home/usuario/practicas/P09-functions2/capitalize_vowels/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/usuario/practicas/P09-functions2/capitalize_vowels /home/usuario/practicas/P09-functions2/capitalize_vowels /home/usuario/practicas/P09-functions2/capitalize_vowels/build /home/usuario/practicas/P09-functions2/capitalize_vowels/build /home/usuario/practicas/P09-functions2/capitalize_vowels/build/CMakeFiles/capitalize_vowels.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/capitalize_vowels.dir/depend

