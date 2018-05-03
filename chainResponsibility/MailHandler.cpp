// mail.cpp
// Corey S. Gray
// 01 May 2018
// Header for mailRouter - a demonstration of Chain of Responsibility

#include "MailHandler.h"

MailHandler::MailHandler() : nextHandler{ nullptr } {};

void MailHandler::setNextHandler(std::shared_ptr<MailHandler> handler) {
	nextHandler = handler;
};

void MailHandler::addHandler(std::shared_ptr<MailHandler> handler) {
	if (nextHandler)
		nextHandler->addHandler(handler);
	else
		setNextHandler(handler);
};

void MailHandler::routeMail(Letter letter) {
	if (nextHandler)
		nextHandler->routeMail(letter);
	else
		std::cout << "Failed to route mail..." << std::endl;
};
