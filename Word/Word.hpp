#pragma once
#include <bitset>
#include <iostream>

class Word{
    std::bitset<32> bits;
public:
    Word(uint8_t address, bool k, uint8_t controlMode, uint8_t controlCode);  // командное слово
    Word(uint16_t data); // слово данных
    Word(uint8_t address, bool error, bool os, bool serviceRequest, bool groupCommand, bool subscriberBusy, bool subscriberError, bool interfaceManagement, 
        bool objectError); // ответное слово
    const std::bitset<32>& const getBitset() const;
};

std::ostream& operator <<(std::ostream& os, const Word& word);