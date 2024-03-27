#pragma once
#include <vector>
#include "../Word/Word.hpp"

// тут печаль полная
class Message{
    std::vector<Word> words;
    // type; enum какой-нить надо будет сделать
    uint8_t duration; // тип скорее всего поменяем
    bool state;
public:
};