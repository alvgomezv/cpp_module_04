#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << "AMateria default constructor called" << std::endl;
	return ;
}

AMateria::AMateria(const AMateria& other)
{
	*this = other;
	std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria&	AMateria::operator=(const AMateria& other)
{
	this->_type = other._type;
	std::cout << "AMateria assignation operator called" << std::endl;
	return *this;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor called" << std::endl;
	return ;
}

std::string const	&AMateria::getType(void) const
{
	return this->_type;
}

AMateria* AMateria::clone(void) const
{
	std::cout << "Clone function for AMateria" << std::endl;
	return NULL;
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "Use function for AMateria to: " << target.getName() << std::endl;
	return ;
}



