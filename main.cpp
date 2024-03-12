#include "Word.hpp"

int main()
{
    // 1. �� ���������� - ��������� �� �� �����?
    // 2. � ������� ����� ���-�� ���� test.getBitset().to_string() . ������ ����� ������ ��� �������
    // ���� ���� ���������
    uint8_t address = 3;
    bool k = false;
    uint8_t controlMode = 2;
    uint8_t controlCode = 4;
    uint16_t data = 343;
    Word test(address, k, controlMode, controlCode);
    std::cout << "Command word: " << test << std::endl; // ����� ����� test.getBitset().to_string()
    Word test2(data);
    std::cout << "Data word: " << test2 << std::endl;
}