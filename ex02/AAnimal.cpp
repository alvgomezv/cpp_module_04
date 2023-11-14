#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "AAnimal default constructor called" << std::endl;
	return ;
}

AAnimal::AAnimal(const AAnimal& other)
{
	*this = other;
	std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal&	AAnimal::operator=(const AAnimal& other)
{
	this->_type = other._type;
	std::cout << "AAnimal assignation operator called" << std::endl;
	return *this;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal destructor called" << std::endl;
	return ;
}

std::string	AAnimal::getType(void) const
{
	return this->_type;
}

void	AAnimal::makeSound(void) const
{
	std::cout << "AAnimal is making a sound!" << std::endl;
}

