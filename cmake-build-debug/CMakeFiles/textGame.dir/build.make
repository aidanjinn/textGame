# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.24

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2022.3.2\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2022.3.2\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Aidan\textGame

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Aidan\textGame\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/textGame.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/textGame.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/textGame.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/textGame.dir/flags.make

CMakeFiles/textGame.dir/main.cpp.obj: CMakeFiles/textGame.dir/flags.make
CMakeFiles/textGame.dir/main.cpp.obj: C:/Users/Aidan/textGame/main.cpp
CMakeFiles/textGame.dir/main.cpp.obj: CMakeFiles/textGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Aidan\textGame\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/textGame.dir/main.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/textGame.dir/main.cpp.obj -MF CMakeFiles\textGame.dir\main.cpp.obj.d -o CMakeFiles\textGame.dir\main.cpp.obj -c C:\Users\Aidan\textGame\main.cpp

CMakeFiles/textGame.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/textGame.dir/main.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Aidan\textGame\main.cpp > CMakeFiles\textGame.dir\main.cpp.i

CMakeFiles/textGame.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/textGame.dir/main.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Aidan\textGame\main.cpp -o CMakeFiles\textGame.dir\main.cpp.s

CMakeFiles/textGame.dir/player.cpp.obj: CMakeFiles/textGame.dir/flags.make
CMakeFiles/textGame.dir/player.cpp.obj: C:/Users/Aidan/textGame/player.cpp
CMakeFiles/textGame.dir/player.cpp.obj: CMakeFiles/textGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Aidan\textGame\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/textGame.dir/player.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/textGame.dir/player.cpp.obj -MF CMakeFiles\textGame.dir\player.cpp.obj.d -o CMakeFiles\textGame.dir\player.cpp.obj -c C:\Users\Aidan\textGame\player.cpp

CMakeFiles/textGame.dir/player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/textGame.dir/player.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Aidan\textGame\player.cpp > CMakeFiles\textGame.dir\player.cpp.i

CMakeFiles/textGame.dir/player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/textGame.dir/player.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Aidan\textGame\player.cpp -o CMakeFiles\textGame.dir\player.cpp.s

CMakeFiles/textGame.dir/inventory.cpp.obj: CMakeFiles/textGame.dir/flags.make
CMakeFiles/textGame.dir/inventory.cpp.obj: C:/Users/Aidan/textGame/inventory.cpp
CMakeFiles/textGame.dir/inventory.cpp.obj: CMakeFiles/textGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Aidan\textGame\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/textGame.dir/inventory.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/textGame.dir/inventory.cpp.obj -MF CMakeFiles\textGame.dir\inventory.cpp.obj.d -o CMakeFiles\textGame.dir\inventory.cpp.obj -c C:\Users\Aidan\textGame\inventory.cpp

CMakeFiles/textGame.dir/inventory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/textGame.dir/inventory.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Aidan\textGame\inventory.cpp > CMakeFiles\textGame.dir\inventory.cpp.i

CMakeFiles/textGame.dir/inventory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/textGame.dir/inventory.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Aidan\textGame\inventory.cpp -o CMakeFiles\textGame.dir\inventory.cpp.s

CMakeFiles/textGame.dir/world.cpp.obj: CMakeFiles/textGame.dir/flags.make
CMakeFiles/textGame.dir/world.cpp.obj: C:/Users/Aidan/textGame/world.cpp
CMakeFiles/textGame.dir/world.cpp.obj: CMakeFiles/textGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Aidan\textGame\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/textGame.dir/world.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/textGame.dir/world.cpp.obj -MF CMakeFiles\textGame.dir\world.cpp.obj.d -o CMakeFiles\textGame.dir\world.cpp.obj -c C:\Users\Aidan\textGame\world.cpp

CMakeFiles/textGame.dir/world.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/textGame.dir/world.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Aidan\textGame\world.cpp > CMakeFiles\textGame.dir\world.cpp.i

CMakeFiles/textGame.dir/world.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/textGame.dir/world.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Aidan\textGame\world.cpp -o CMakeFiles\textGame.dir\world.cpp.s

# Object files for target textGame
textGame_OBJECTS = \
"CMakeFiles/textGame.dir/main.cpp.obj" \
"CMakeFiles/textGame.dir/player.cpp.obj" \
"CMakeFiles/textGame.dir/inventory.cpp.obj" \
"CMakeFiles/textGame.dir/world.cpp.obj"

# External object files for target textGame
textGame_EXTERNAL_OBJECTS =

textGame.exe: CMakeFiles/textGame.dir/main.cpp.obj
textGame.exe: CMakeFiles/textGame.dir/player.cpp.obj
textGame.exe: CMakeFiles/textGame.dir/inventory.cpp.obj
textGame.exe: CMakeFiles/textGame.dir/world.cpp.obj
textGame.exe: CMakeFiles/textGame.dir/build.make
textGame.exe: CMakeFiles/textGame.dir/linklibs.rsp
textGame.exe: CMakeFiles/textGame.dir/objects1.rsp
textGame.exe: CMakeFiles/textGame.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Aidan\textGame\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable textGame.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\textGame.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/textGame.dir/build: textGame.exe
.PHONY : CMakeFiles/textGame.dir/build

CMakeFiles/textGame.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\textGame.dir\cmake_clean.cmake
.PHONY : CMakeFiles/textGame.dir/clean

CMakeFiles/textGame.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Aidan\textGame C:\Users\Aidan\textGame C:\Users\Aidan\textGame\cmake-build-debug C:\Users\Aidan\textGame\cmake-build-debug C:\Users\Aidan\textGame\cmake-build-debug\CMakeFiles\textGame.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/textGame.dir/depend

