# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2023.2\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2023.2\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\guili\OneDrive\Documentos\GitHub\NumericCalculus

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\guili\OneDrive\Documentos\GitHub\NumericCalculus\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/NumericCalculus.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/NumericCalculus.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/NumericCalculus.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/NumericCalculus.dir/flags.make

CMakeFiles/NumericCalculus.dir/Factorial.c.obj: CMakeFiles/NumericCalculus.dir/flags.make
CMakeFiles/NumericCalculus.dir/Factorial.c.obj: C:/Users/guili/OneDrive/Documentos/GitHub/NumericCalculus/Factorial.c
CMakeFiles/NumericCalculus.dir/Factorial.c.obj: CMakeFiles/NumericCalculus.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\guili\OneDrive\Documentos\GitHub\NumericCalculus\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/NumericCalculus.dir/Factorial.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/NumericCalculus.dir/Factorial.c.obj -MF CMakeFiles\NumericCalculus.dir\Factorial.c.obj.d -o CMakeFiles\NumericCalculus.dir\Factorial.c.obj -c C:\Users\guili\OneDrive\Documentos\GitHub\NumericCalculus\Factorial.c

CMakeFiles/NumericCalculus.dir/Factorial.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/NumericCalculus.dir/Factorial.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\guili\OneDrive\Documentos\GitHub\NumericCalculus\Factorial.c > CMakeFiles\NumericCalculus.dir\Factorial.c.i

CMakeFiles/NumericCalculus.dir/Factorial.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/NumericCalculus.dir/Factorial.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\guili\OneDrive\Documentos\GitHub\NumericCalculus\Factorial.c -o CMakeFiles\NumericCalculus.dir\Factorial.c.s

# Object files for target NumericCalculus
NumericCalculus_OBJECTS = \
"CMakeFiles/NumericCalculus.dir/Factorial.c.obj"

# External object files for target NumericCalculus
NumericCalculus_EXTERNAL_OBJECTS =

NumericCalculus.exe: CMakeFiles/NumericCalculus.dir/Factorial.c.obj
NumericCalculus.exe: CMakeFiles/NumericCalculus.dir/build.make
NumericCalculus.exe: CMakeFiles/NumericCalculus.dir/linkLibs.rsp
NumericCalculus.exe: CMakeFiles/NumericCalculus.dir/objects1.rsp
NumericCalculus.exe: CMakeFiles/NumericCalculus.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\guili\OneDrive\Documentos\GitHub\NumericCalculus\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable NumericCalculus.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\NumericCalculus.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/NumericCalculus.dir/build: NumericCalculus.exe
.PHONY : CMakeFiles/NumericCalculus.dir/build

CMakeFiles/NumericCalculus.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\NumericCalculus.dir\cmake_clean.cmake
.PHONY : CMakeFiles/NumericCalculus.dir/clean

CMakeFiles/NumericCalculus.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\guili\OneDrive\Documentos\GitHub\NumericCalculus C:\Users\guili\OneDrive\Documentos\GitHub\NumericCalculus C:\Users\guili\OneDrive\Documentos\GitHub\NumericCalculus\cmake-build-debug C:\Users\guili\OneDrive\Documentos\GitHub\NumericCalculus\cmake-build-debug C:\Users\guili\OneDrive\Documentos\GitHub\NumericCalculus\cmake-build-debug\CMakeFiles\NumericCalculus.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/NumericCalculus.dir/depend

