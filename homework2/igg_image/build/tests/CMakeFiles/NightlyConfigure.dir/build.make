# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.19.4/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.19.4/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/tingchel/igor_modern_cpp/homework2/igg_image

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/tingchel/igor_modern_cpp/homework2/igg_image/build

# Utility rule file for NightlyConfigure.

# Include the progress variables for this target.
include tests/CMakeFiles/NightlyConfigure.dir/progress.make

tests/CMakeFiles/NightlyConfigure:
	cd /Users/tingchel/igor_modern_cpp/homework2/igg_image/build/tests && /usr/local/Cellar/cmake/3.19.4/bin/ctest -D NightlyConfigure

NightlyConfigure: tests/CMakeFiles/NightlyConfigure
NightlyConfigure: tests/CMakeFiles/NightlyConfigure.dir/build.make

.PHONY : NightlyConfigure

# Rule to build all files generated by this target.
tests/CMakeFiles/NightlyConfigure.dir/build: NightlyConfigure

.PHONY : tests/CMakeFiles/NightlyConfigure.dir/build

tests/CMakeFiles/NightlyConfigure.dir/clean:
	cd /Users/tingchel/igor_modern_cpp/homework2/igg_image/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/NightlyConfigure.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/NightlyConfigure.dir/clean

tests/CMakeFiles/NightlyConfigure.dir/depend:
	cd /Users/tingchel/igor_modern_cpp/homework2/igg_image/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/tingchel/igor_modern_cpp/homework2/igg_image /Users/tingchel/igor_modern_cpp/homework2/igg_image/tests /Users/tingchel/igor_modern_cpp/homework2/igg_image/build /Users/tingchel/igor_modern_cpp/homework2/igg_image/build/tests /Users/tingchel/igor_modern_cpp/homework2/igg_image/build/tests/CMakeFiles/NightlyConfigure.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/NightlyConfigure.dir/depend

