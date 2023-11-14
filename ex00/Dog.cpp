#include "Dog.hpp"

Dog::Dog(void)
{
	this->_type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
	return ;
}

Dog::Dog(const Dog& other)
{
	*this = other;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog& other)
{
	this->_type = other._type;
	std::cout << "Dog assignation operator called" << std::endl;
	return *this;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	return ;
}

std::string	Dog::getType(void) const
{
	return this->_type;
}

void	Dog::makeSound(void) const
{
	std::cout << "Wooooooof!!" << std::endl;
}

