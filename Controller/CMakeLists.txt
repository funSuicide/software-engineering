# CMakeList.txt: проект CMake для test_cmake; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

set(CMAKE_CXX_STANDARD 20)
add_library(ControllerLibrary "Controller.hpp" "Controller.cpp")
target_link_libraries(ControllerLibrary PRIVATE MessageLibrary)

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
