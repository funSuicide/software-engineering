#pragma once
#include "Word.hpp"

Word::Word(uint8_t address, bool k, uint8_t controlMode, uint8_t controlCode)  // командное слово
{
    for (size_t i = 12; i < 17; ++i)
    {
        bits[i] = (address & (1 << (i-12)));
    }
    for (size_t i = 6; i < 11; ++i)
    {
        bits[i] = (controlMode & (1 << (i-6)));
    }
    for (size_t i = 1; i < 6; ++i)
    {
        bits[i] = (controlCode & (1 << (i-1)));
    }
    bits[11] = k;
    bits[0] = (bits.count() % 2 == 0);
}

Word::Word(uint16_t data)  // слово данных
{
    for (size_t i = 1; i < 17; ++i)
    {
        bits[i] = (data & (1 << (i-1)));
    }
    bits[0] = (bits.count() % 2 == 0);
}

Word::Word(uint8_t address, bool error, bool os, bool serviceRequest, bool groupCommand, bool subscriberBusy, bool subscriberError, bool interfaceManagement, 
        bool objectError)  // ответное слово
{
    for (size_t i = 12; i < 17; ++i)
    {
        bits[i] = (address & (1 << (i-12)));
    }
    bits[11] = error;
    bits[10] = os;
    bits[9] = serviceRequest;
    bits[5] = groupCommand;
    bits[4] = subscriberBusy;
    bits[3] = subscriberError;
    bits[2] = interfaceManagement;
    bits[1] = objectError;
    bits[0] = (bits.count() % 2 == 0);
}
const std::bitset<32>& const Word::getBitset() const
{
    return this->bits;
}

std::ostream& operator <<(std::ostream& os, const Word& word)
{
    return os << word.getBitset();
}
