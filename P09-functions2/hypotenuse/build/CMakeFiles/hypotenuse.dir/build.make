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
CMAKE_SOURCE_DIR = /home/usuario/practicas/P09-functions2/hypotenuse

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/usuario/practicas/P09-functions2/hypotenuse/build

# Include any dependencies generated for this target.
include CMakeFiles/hypotenuse.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/hypotenuse.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/hypotenuse.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hypotenuse.dir/flags.make

CMakeFiles/hypotenuse.dir/hypotenuse.cc.o: CMakeFiles/hypotenuse.dir/flags.make
CMakeFiles/hypotenuse.dir/hypotenuse.cc.o: /home/usuario/practicas/P09-functions2/hypotenuse/hypotenuse.cc
CMakeFiles/hypotenuse.dir/hypotenuse.cc.o: CMakeFiles/hypotenuse.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/usuario/practicas/P09-functions2/hypotenuse/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hypotenuse.dir/hypotenuse.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/hypotenuse.dir/hypotenuse.cc.o -MF CMakeFiles/hypotenuse.dir/hypotenuse.cc.o.d -o CMakeFiles/hypotenuse.dir/hypotenuse.cc.o -c /home/usuario/practicas/P09-functions2/hypotenuse/hypotenuse.cc

CMakeFiles/hypotenuse.dir/hypotenuse.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/hypotenuse.dir/hypotenuse.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usuario/practicas/P09-functions2/hypotenuse/hypotenuse.cc > CMakeFiles/hypotenuse.dir/hypotenuse.cc.i

CMakeFiles/hypotenuse.dir/hypotenuse.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/hypotenuse.dir/hypotenuse.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usuario/practicas/P09-functions2/hypotenuse/hypotenuse.cc -o CMakeFiles/hypotenuse.dir/hypotenuse.cc.s

# Object files for target hypotenuse
hypotenuse_OBJECTS = \
"CMakeFiles/hypotenuse.dir/hypotenuse.cc.o"

# External object files for target hypotenuse
hypotenuse_EXTERNAL_OBJECTS =

hypotenuse: CMakeFiles/hypotenuse.dir/hypotenuse.cc.o
hypotenuse: CMakeFiles/hypotenuse.dir/build.make
hypotenuse: CMakeFiles/hypotenuse.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/usuario/practicas/P09-functions2/hypotenuse/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable hypotenuse"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hypotenuse.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hypotenuse.dir/build: hypotenuse
.PHONY : CMakeFiles/hypotenuse.dir/build

CMakeFiles/hypotenuse.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hypotenuse.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hypotenuse.dir/clean

CMakeFiles/hypotenuse.dir/depend:
	cd /home/usuario/practicas/P09-functions2/hypotenuse/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/usuario/practicas/P09-functions2/hypotenuse /home/usuario/practicas/P09-functions2/hypotenuse /home/usuario/practicas/P09-functions2/hypotenuse/build /home/usuario/practicas/P09-functions2/hypotenuse/build /home/usuario/practicas/P09-functions2/hypotenuse/build/CMakeFiles/hypotenuse.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/hypotenuse.dir/depend
