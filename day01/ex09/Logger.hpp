//
// Created by Vladyslav USLYSTYI on 2019-06-26.
//

#ifndef PISCINECPP_LOGGER_HPP
#define PISCINECPP_LOGGER_HPP

#include <string>
#include <fstream>

class Logger
{

public:

	Logger(std::string const &fileName);
	~Logger();
	void		log(std::string const &dest, std::string const &message);

private:

	std::ofstream		file;
	std::string			params[2];
	void		(Logger::*f[2])(std::string const &);

	void		logToConsole(std::string const &loggin);
	void		logToFile(std::string const &loggin);
	std::string	makeLogEntry(std::string const &massage);

	static std::string	displayTimestamp();
};


#endif //PISCINECPP_LOGGER_HPP
