# CMakeList.txt: ������ CMake ��� test_cmake; �������� �������� ��� � �����������,
# ������� ����� ������ ��� ����������� �������.
#

set(CMAKE_CXX_STANDARD 20)
add_library(MessageLibrary "Message.cpp" "Message.hpp")
target_link_libraries(MessageLibrary PRIVATE WordLibrary)
# TODO: �������� ����� � ������� �������, ���� ��� ����������.
