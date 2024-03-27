# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
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
add_subdirectory(Line)
add_subdirectory(Message)
add_subdirectory(Controller)
add_subdirectory(Unit)
include_directories(.)
add_executable(softwareEngineering main.cpp Word common.hpp "Unit/Unit.cpp")
target_link_libraries(softwareEngineering PRIVATE WordLibrary)
target_link_libraries(softwareEngineering PRIVATE LineLibrary)
target_link_libraries(softwareEngineering PRIVATE MessageLibrary)
target_link_libraries(softwareEngineering PRIVATE ControllerLibrary)
target_link_libraries(softwareEngineering PRIVATE UnitLibrary)
target_include_directories(softwareEngineering PUBLIC Word)
target_include_directories(softwareEngineering PUBLIC Line)
target_include_directories(softwareEngineering PUBLIC Message)
target_include_directories(softwareEngineering PUBLIC Controller)
target_include_directories(softwareEngineering PUBLIC Unit)