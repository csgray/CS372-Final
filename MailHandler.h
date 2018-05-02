// mail.h
// Corey S. Gray
// 01 May 2018
// Header for MailHandler - a demonstration of Chain of Responsibility

#ifndef FILE_MAILHANDLER_H_INCLUDED
#define FILE_MAILHANDLER_H_INCLUDED

#include <iostream> // cout and endl
#include <memory>   // shared_ptr
#include <string>	// string

struct Letter {
	std::string name;
	int zip;
};

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
