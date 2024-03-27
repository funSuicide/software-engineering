#pragma once
#include <bitset>
#include <iostream>
#include <vector>
#include "../Message/Message.hpp"

class CommunicationLine {
	bool isFull;
	std::vector<int> socket_descriptors;
	// std::vector<int> address_descriptors;
	bool checkForMessage()
	{
		// Проверка 20 сокетов..
		return false;
	}
	void sendToAll(const Message& msg)
	{
		// Отослать всем 20 сокетам это сообщение
		// 
		return;
	}
public:
	CommunicationLine()
	{
		/*
		* Добавление 20 сокетов в std::vector<int>, возможно через make_socket из common.hpp
		int socket_desc;
		socket_desc = socket(AF_INET, SOCK_STREAM, 0);
		socket_descriptors.append(socket_desc);
		*/
	}
	void send()
	{
		if (checkForMessage())
		{
			// 
			/* std::getline(std::cin, message);
			if (message == "q")
				break;
			if (!std::regex_match(message, std::regex("^\\d+$")) || message.size() > 8)
			{
				std::cout << "This is not a number or data is too big" << std::endl;
				continue;
			}
			int to_server = std::stoi(message);
			check(send(sock_fd, &to_server, sizeof(int), 0));
			*/
			return;
		}
		return;
	}
};