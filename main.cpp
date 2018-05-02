// main.cpp
// Corey S. Gray
// 01 May 2018
// Test program for MailHandler

#include "LocalHandler.h"

int main() {
	// Create some LocalHandlers
	auto handlerFairbanks = LocalHandler(99709, "Fairbanks");
	auto handlerNorthPole = LocalHandler(99705, "North Pole");
	auto handlerDowntown = LocalHandler(99701, "Downtown Fairbanks");
	auto handlerWainwright = LocalHandler(99703, "Fort Wainwright");
	auto handlerUAF = LocalHandler(99775, "UAF");

	// Chain the LocalHandlers together by adding them to a route node
	handlerFairbanks.addHandler(std::make_shared<LocalHandler>(handlerNorthPole));
	handlerFairbanks.addHandler(std::make_shared<LocalHandler>(handlerDowntown));
	handlerFairbanks.addHandler(std::make_shared<LocalHandler>(handlerWainwright));
	handlerFairbanks.addHandler(std::make_shared<LocalHandler>(handlerUAF));

	// Create some letters
	Letter letter0 = { "Abe", 99705 };
	Letter letter1 = { "Baker", 99709 };
	Letter letter2 = { "Charlie", 99775 };
	Letter letter3 = { "Dave", 99709 };
	Letter letter4 = { "Earnest", 99701 };
	Letter letter5 = { "Frank", 99703 };
	Letter letter6 = { "George", 99775 };
	Letter letter7 = { "Harry", 99709 };
	Letter letter8 = { "Ian", 99705 };
	Letter letter9 = { "Jack", 99701 };
	Letter letter10 = { "Kyle", 97471 };
	Letter letter11 = { "Larry", 02053 };
	Letter letter12 = { "Mike", 92008 };
	Letter letter13 = { "Ned", 96706 };
	Letter letter14 = { "Oscar", 93901 };

	// Route them
	handlerFairbanks.routeMail(letter0);
	handlerFairbanks.routeMail(letter1);
	handlerFairbanks.routeMail(letter10);
	handlerFairbanks.routeMail(letter2);
	handlerFairbanks.routeMail(letter11);
	handlerFairbanks.routeMail(letter12);
	handlerFairbanks.routeMail(letter3);
	handlerFairbanks.routeMail(letter4);
	handlerFairbanks.routeMail(letter5);
	handlerFairbanks.routeMail(letter13);
	handlerFairbanks.routeMail(letter6);
	handlerFairbanks.routeMail(letter7);
	handlerFairbanks.routeMail(letter14);
	handlerFairbanks.routeMail(letter8);
	handlerFairbanks.routeMail(letter9);

	return 0;
}