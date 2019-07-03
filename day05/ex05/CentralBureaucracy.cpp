//
// Created by Vladyslav USLYSTYI on 2019-07-03.
//

#include "CentralBureaucracy.hpp"

CentralBureaucracy::CentralBureaucracy()
{
	for (int i = 0; i < 20; i++)
		_block[i].setIntern(new Intern);
	queue = nullptr;
}

CentralBureaucracy::CentralBureaucracy(CentralBureaucracy const &)
{}

CentralBureaucracy& CentralBureaucracy::operator=(CentralBureaucracy const &)
{
	return *this;
}

CentralBureaucracy::~CentralBureaucracy()
{
	Queue::delQueue(&queue);
}

void CentralBureaucracy::queueUp(std::string target)
{
	Queue::push(&queue, target);
}

void CentralBureaucracy::addWorker(Bureaucrat *bureaucrat)
{
	for(int i = 0; i < 20; i++)
	{
		if (_block[i].getSigner() == nullptr)
		{
			_block[i].setSigner(bureaucrat);
			return;
		}
		else if (_block[i].getExecutor() == nullptr)
		{
			_block[i].setExecutor(bureaucrat);
			return;
		}
	}
	delete bureaucrat;
	throw BureaucracyIsFull();
}

void CentralBureaucracy::doBureaucracy()
{
	static int i = 0;
	static std::string forms[3] =
			{
				"shrubbery creation",
				"robotomy request",
				"presidentical pardon"
			};

	std::cout << "-----------------------------------" << std::endl;
	std::cout << "-------------START WORK------------" << std::endl;
	while(queue)
	{
		std::cout << "---------------- " << i + 1 << " ----------------" << std::endl;
		try
		{
			_block[i++ % 20].doBureaucracy(forms[rand() % 3], Queue::pop(&queue));
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "-----------------------------------" << std::endl;
	}
	std::cout << "--------------END WORK-------------" << std::endl;
	std::cout << "-----------------------------------" << std::endl;
}

const char* CentralBureaucracy::BureaucracyIsFull::what() const throw()
{
	return ("Bureaucracy is full");
}

CentralBureaucracy::BureaucracyIsFull::BureaucracyIsFull() {}
CentralBureaucracy::BureaucracyIsFull::BureaucracyIsFull(const CentralBureaucracy::BureaucracyIsFull &) throw() {}
CentralBureaucracy::BureaucracyIsFull& CentralBureaucracy::BureaucracyIsFull::operator=(const CentralBureaucracy::BureaucracyIsFull &){return *this;}
CentralBureaucracy::BureaucracyIsFull::~BureaucracyIsFull() throw() {}