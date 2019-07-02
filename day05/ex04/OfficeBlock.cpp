//
// Created by Vladyslav USLYSTYI on 2019-07-02.
//

#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock() : _intern(nullptr), _signer(nullptr), _executor(nullptr)
{}

OfficeBlock::OfficeBlock(Intern *intern, Bureaucrat *signer, Bureaucrat *executor) :
	_intern(intern), _signer(signer), _executor(executor)
{}

OfficeBlock::OfficeBlock(OfficeBlock const &)
{}

OfficeBlock& OfficeBlock::operator=(OfficeBlock const &)
{
	return *this;
}

void OfficeBlock::setIntern(Intern *intern)
{
	this->_intern = intern;
}

void OfficeBlock::setSigner(Bureaucrat *signer)
{
	this->_signer = signer;
}

void OfficeBlock::setExecutor(Bureaucrat *executor)
{
	this->_executor = executor;
}


OfficeBlock::~OfficeBlock() {}

void OfficeBlock::doBureaucracy(std::string formName, std::string target)
{
	Form	*form = nullptr;

	if (!(_intern && _signer && _executor))
		throw InvalidOfficeBlock();

	std::cout << "Our office:" << std::endl;
	std::cout << "Signer: " << *_signer;
	std::cout << "Executor: " << *_executor;
	std::cout << "and some stupid intern" << std::endl << std::endl;

	form = _intern->makeForm(formName, target);
	_signer->singForm(*form);
	_executor->executeForm(*form);
	delete (form);
}

const char* OfficeBlock::InvalidOfficeBlock::what() const throw()
{
	return ("Functional office block must have 1 intern and 2 bureaucrats");
}

OfficeBlock::InvalidOfficeBlock::InvalidOfficeBlock() {}
OfficeBlock::InvalidOfficeBlock::InvalidOfficeBlock(const OfficeBlock::InvalidOfficeBlock &) throw() {}
OfficeBlock::InvalidOfficeBlock& OfficeBlock::InvalidOfficeBlock::operator=(const OfficeBlock::InvalidOfficeBlock &){return *this;}
OfficeBlock::InvalidOfficeBlock::~InvalidOfficeBlock() throw() {}