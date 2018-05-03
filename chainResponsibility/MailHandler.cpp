// mail.cpp
// Corey S. Gray
// 01 May 2018
// Header for MailHandler - an example of the Chain of Responsibility pattern

#include "MailHandler.h"

// Constructor
MailHandler::MailHandler() : nextHandler{ nullptr } {};

// setNextHandler
// Takes a shared pointer to the next MailHandler in the chain.
// Updates the nextHandler variable.
void MailHandler::setNextHandler(std::shared_ptr<MailHandler> handler) {
	nextHandler = handler;
};

// addHandler
// Takes a shared pointer to a MailHandler.
// Follows the Chain of Responsibility to the end then adds the MailHandler.
void MailHandler::addHandler(std::shared_ptr<MailHandler> handler) {
	if (nextHandler)
		nextHandler->addHandler(handler);
	else
		setNextHandler(handler);
};

// routeMail
// Takes a Letter struct.
// Passes the Letter down the chain until a MailHandler handles it or it reaches the end.
void MailHandler::routeMail(Letter &letter) {
	if (nextHandler)
		nextHandler->routeMail(letter);
	else
		std::cout << "Failed to route mail..." << std::endl;
};
