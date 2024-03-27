# CMakeList.txt: проект CMake для test_cmake; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

set(CMAKE_CXX_STANDARD 20)
add_library(MessageLibrary "Message.cpp" "Message.hpp")
target_link_libraries(MessageLibrary PRIVATE WordLibrary)
# TODO: Добавьте тесты и целевые объекты, если это необходимо.
