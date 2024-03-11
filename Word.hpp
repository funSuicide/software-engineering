#include <bitset>

class Word{
    std::bitset<32> bits;
public:
    Word(uint8_t address, bool k, uint8_t controlMode, uint8_t controlCode);
    Word(short data);
    Word(uint8_t address, bool error, bool os, bool serviceRequest, bool groupCommand, bool subscriberBusy, bool subscriberError, bool interfaceManagement, 
        bool objectError);
};