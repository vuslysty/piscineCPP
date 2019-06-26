//
// Created by Vladyslav USLYSTYI on 2019-06-26.
//

#include "Logger.hpp"

int main()
{
	Logger	log("MyLogs");

	log.log("console", "trulala la la..");
	log.log("console", "2 log lol");
	log.log("file", "2 log lol");
	log.log("file", "trulala la la..");
	log.log("file", "3 log");
	log.log("file", "4 log");
	log.log("console", "trulala la la.. 3");

	log.log("filed", "3 log");
	log.log("filed", "4 log");
	log.log("consolde", "trulala la la.. 3");

	return (0);
}