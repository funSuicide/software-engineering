#include "Word.hpp"
#include "Message.hpp"
#include "CommunicationLine.hpp"
#include "Controller.hpp"

int main()
{
    // 1. НА ОБСУЖДЕНИЕ - переходим ли на линух? - Ответ: да
    // 2. В сокетах юзать что-то типа test.getBitset().to_string() . Сокеты юзаем потому что мютексы
    // мало инфы переносят
    Message msg;
    CommunicationLine line;
    Controller controller(3, 4, 5, true);
    uint8_t address = 3;
    bool k = false;
    uint8_t controlMode = 2;
    uint8_t controlCode = 4;
    uint16_t data = 343;
    Word test(address, k, controlMode, controlCode);
    std::cout << "Command word: " << test << std::endl; // можно юзать test.getBitset().to_string()
    Word test2(data);
    std::cout << "Data word: " << test2 << std::endl;
}