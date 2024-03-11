#include "Word.hpp"

int main()
{
    uint8_t address = 3;
    bool k = false;
    uint8_t controlMode = 2;
    uint8_t controlCode = 4;
    uint16_t data = 343;
    Word test(address, k, controlMode, controlCode);
    test.printWord();
    Word test2(data);
    test2.printWord();
}