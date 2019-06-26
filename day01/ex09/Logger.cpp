//
// Created by Vladyslav USLYSTYI on 2019-06-26.
//

#include <sstream>
#include <iostream>
#include "Logger.hpp"

Logger::Logger(std::string const &fileName)
{
	file.open(fileName + ".log", std::ofstream::app);

	this->f[0] = &Logger::logToConsole;
	this->f[1] = &Logger::logToFile;

	this->params[0] = "console";
	this->params[1] = "file";
}

Logger::~Logger()
{
	file.close();
}

std::string	Logger::displayTimestamp()
{
	time_t				now = time(0);
	struct tm			tstruct;
	char       			buf[80];
	std::stringstream	stream;

	tstruct = *localtime(&now);
	strftime(buf, sizeof(buf), "%Y%m%d_%H%M%S", &tstruct);
	stream <<  '[' << buf << "] ";
	return (stream.str());
}

std::string Logger::makeLogEntry(std::string const &message)
{
	return (displayTimestamp() + message);
}

void		Logger::logToFile(std::string  const &loggin)
{
	file << makeLogEntry(loggin) << '\n';
}

void		Logger::logToConsole(std::string const &loggin)
{
	std::cout << makeLogEntry(loggin) << std::endl;
}

void		Logger::log(std::string const &dest, std::string const &message)
{
	for (int i = 0; i < 2; i++)
	{
		if (dest == params[i])
			(this->*f[i])(message);
	}
}