#pragma once
#include <bitset>
#include <iostream>
#include <vector>
#include "../Message/Message.hpp"

class Unit
{
	std::bitset<4> addr;
	// bool isGenerating = false;
	bool isOn = true;
	int mainLineFd;
	int secondaryLineFd;
public:
	Unit(const std::bitset<4> addr): addr (addr) {}
	void getMessage(const Message& msg)
	{
		if (!isOn) return;
		// check fd and maybe send response
	}

	// потом эти два метода перенесутся, скорее всего, внутрь реакции на сообщение
	void switchOn()
	{
		this->isOn = true;
	}
	void switchOff()
	{
		this->isOn = false;
	}
};