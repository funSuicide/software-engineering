﻿# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
project (softwareEngineering)
cmake_minimum_required (VERSION 3.8)
set(CMAKE_CXX_STANDARD 20)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()



# Включите подпроекты.
add_subdirectory (Word)
include_directories(.)
add_executable(softwareEngineering main.cpp Word)
target_link_libraries(softwareEngineering PRIVATE WordLibrary)
target_include_directories(softwareEngineering PUBLIC Word)