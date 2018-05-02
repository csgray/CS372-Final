// localHandler.h
// Corey S. Gray
// 01 May 2018
// Header for mailHandler - a demonstration of Chain of Responsibility

#ifndef FILE_LOCALHANDLER_H_INCLUDED
#define FILE_LOCALHANDLER_H_INCLUDED

#include "MailHandler.h"

class LocalHandler : public MailHandler {
private:
	int localZip;
	std::string placename;

public:
	LocalHandler(int, std::string);

	void routeMail(Letter);
};

#endif // #ifndef FILE_LOCALHANDLER_H_INCLUDED
