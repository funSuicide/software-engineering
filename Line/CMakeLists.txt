# CMakeList.txt: ������ CMake ��� test_cmake; �������� �������� ��� � �����������,
# ������� ����� ������ ��� ����������� �������.
#

set(CMAKE_CXX_STANDARD 20)
add_library(LineLibrary "CommunicationLine.hpp" "CommunicationLine.cpp")
target_link_libraries(LineLibrary PRIVATE MessageLibrary)

# TODO: �������� ����� � ������� �������, ���� ��� ����������.
