//
// Created by Vladyslav USLYSTYI on 2019-07-02.
//

#ifndef PISCINECPP_OFFICEBLOCK_HPP
#define PISCINECPP_OFFICEBLOCK_HPP


#include "Intern.hpp"

class OfficeBlock
{

	Intern		*_intern;
	Bureaucrat	*_signer;
	Bureaucrat	*_executor;

	OfficeBlock(OfficeBlock const &src);
	OfficeBlock	&operator=(OfficeBlock const &rhs);

public:

	class	InvalidOfficeBlock : public std::exception
	{
	public:
		InvalidOfficeBlock();
		InvalidOfficeBlock(InvalidOfficeBlock const &src) throw();
		InvalidOfficeBlock &operator=(InvalidOfficeBlock const &rhs);
		~InvalidOfficeBlock() throw();

		const char 			*what(void) const throw();
	};

	OfficeBlock();
	OfficeBlock(Intern *intern, Bureaucrat *signer, Bureaucrat *executor);
	~OfficeBlock();

	void	setIntern(Intern *intern);
	void	setSigner(Bureaucrat *signer);
	void	setExecutor(Bureaucrat *executor);

	void	doBureaucracy(std::string formName, std::string target);
};


#endif //PISCINECPP_OFFICEBLOCK_HPP
