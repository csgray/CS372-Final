// mail.h
// Corey S. Gray
// 01 May 2018
// Header for MailHandler - an example of the Chain of Responsibility pattern

#ifndef FILE_MAILHANDLER_H_INCLUDED
#define FILE_MAILHANDLER_H_INCLUDED

#include <iostream> // cout and endl
#include <memory>   // shared_ptr
#include <string>	// string

// Letter
// A simple struct to pass to MailHandler for testing.
struct Letter {
	std::string name;
	int zip;
};

// MailHandler
// Base class. Can pass a letter down the chain.
class MailHandler {
private:
	std::shared_ptr<MailHandler> nextHandler;

public:
	MailHandler();

	void setNextHandler(std::shared_ptr<MailHandler>);

	void addHandler(std::shared_ptr<MailHandler>);

	virtual void routeMail(Letter);
};

#endif // #ifndef FILE_MAILHANDLER_H_INCLUDED
