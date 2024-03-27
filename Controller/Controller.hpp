#pragma once
#include <bitset>
#include <iostream>
#include <vector>
#include "../Message/Message.hpp"

class Controller
{
	int mainLineFd;
	int secondaryLineFd;
	int secondControllerFd;
	bool isMain;
public:
	Controller(int mainLineFd, int secondaryLineFd, int secondControllerFd, bool isMain) : mainLineFd (mainLineFd),
		secondaryLineFd (secondaryLineFd), secondControllerFd (secondControllerFd), isMain (isMain) {}
	void send(const Message& msg)
	{
		// send message to line via socket..
		return;
	}
	void checkMainController()
	{
		if (!isMain)
		{
			// do something .. (send message to main controller socket)
		}
	}
	bool checkForGeneration()
	{
		// ??? проверить бит четности 
		// один из вариантов - сохранять прошлый message от Unit ??
	}
};