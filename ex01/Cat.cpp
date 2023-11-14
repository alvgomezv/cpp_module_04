#include "Cat.hpp"

Cat::Cat(void) : _type("Cat")
{
	this->_brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
	return ;
}

Cat::Cat(const Cat& other)
{
	*this = other;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat& other)
{
	this->_type = other._type;
	std::cout << "Cat assignation operator called" << std::endl;
	return *this;
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
	return ;
}

std::string	Cat::getType(void) const
{
	return this->_type;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miiiaaaaaaaaauuuu!" << std::endl;
}

