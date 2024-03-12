# CMakeList.txt: проект CMake для test_cmake; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

set(CMAKE_CXX_STANDARD 20)
add_library(WordLibrary "Word.cpp" "Word.hpp")

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
