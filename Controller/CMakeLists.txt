# CMakeList.txt: ������ CMake ��� test_cmake; �������� �������� ��� � �����������,
# ������� ����� ������ ��� ����������� �������.
#

set(CMAKE_CXX_STANDARD 20)
add_library(ControllerLibrary "Controller.hpp" "Controller.cpp")
target_link_libraries(ControllerLibrary PRIVATE MessageLibrary)

# TODO: �������� ����� � ������� �������, ���� ��� ����������.
