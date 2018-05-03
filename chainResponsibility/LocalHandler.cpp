// localHandler.cpp
// Corey S. Gray
// 01 May 2018
// Header for mailRouter - a demonstration of Chain of Responsibility

#include "LocalHandler.h"

LocalHandler::LocalHandler(int zip, std::string place) : localZip{ zip }, placename{ place } {};

void LocalHandler::routeMail(Letter letter) {
	if (letter.zip == localZip)
		std::cout << "Routing this letter to " << letter.name << " for local delivery to " << placename << "!" << std::endl;
	else
		MailHandler::routeMail(letter);
};
