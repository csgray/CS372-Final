// localHandler.cpp
// Corey S. Gray
// 01 May 2018
// Header for LocalHandler - an example of the Chain of Responsibility pattern

#include "LocalHandler.h"

// Constructor
LocalHandler::LocalHandler(int zip, std::string place) : localZip{ zip }, placename{ place } {};

// routeMail
// Takes a Letter struct.
// If Letter's zip matches LocalHandler's zip, print Letter's name and destination.
// Otherwise, ask the base class to route the Letter to the next handler in the chain.
void LocalHandler::routeMail(Letter letter) {
	if (letter.zip == localZip)
		std::cout << "Routing this letter to " << letter.name << " for local delivery to " << placename << "!" << std::endl;
	else
		MailHandler::routeMail(letter);
};
