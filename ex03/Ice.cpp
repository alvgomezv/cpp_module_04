#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice(void)
{
	this->_type = "ice";
	// std::cout << "Ice default constructor called" << std::endl;
	return ;
}

Ice::Ice(const Ice& other) : AMateria(other)
{
	*this = other;
	// std::cout << "Ice copy constructor called" << std::endl;
}

Ice&	Ice::operator=(const Ice& other)
{
	this->_type = other._type;
	// std::cout << "Ice assignation operator called" << std::endl;
	return *this;
}

Ice::~Ice(void)
{
	// std::cout << "Ice destructor called" << std::endl;
	return ;
}

AMateria*	Ice::clone(void) const
{
	return new Ice();
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}

