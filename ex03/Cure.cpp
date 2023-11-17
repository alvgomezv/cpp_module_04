#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(void)
{
	this->_type = "cure";
	// std::cout << "Cure default constructor called" << std::endl;
	return ;
}

Cure::Cure(const Cure& other)
{
	*this = other;
	// std::cout << "Cure copy constructor called" << std::endl;
}

Cure&	Cure::operator=(const Cure& other)
{
	this->_type = other._type;
	// std::cout << "Cure assignation operator called" << std::endl;
	return *this;
}

Cure::~Cure(void)
{
	// std::cout << "Cure destructor called" << std::endl;
	return ;
}

AMateria*	Cure::clone(void) const
{
	return new Cure();
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}
