// localHandler.h
// Corey S. Gray
// 01 May 2018
// Header for LocalHandler - an example of the Chain of Responsibility pattern

#ifndef FILE_LOCALHANDLER_H_INCLUDED
#define FILE_LOCALHANDLER_H_INCLUDED

#include "MailHandler.h" // Base class

// LocalHandler
// Knows the zip code and name of a local region.
// Will take any Letter matching its zip and print the recipient and placename.
class LocalHandler : public MailHandler {
private:
	int localZip;
	std::string placename;

public:
	LocalHandler(int, std::string);

	void routeMail(Letter &);
};

#endif // #ifndef FILE_LOCALHANDLER_H_INCLUDED
