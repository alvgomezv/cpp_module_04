#include "Character.hpp"

Character::Character(void)
{
	std::cout << "Character default constructor called" << std::endl;
	return ;
}

Character::Character(std::string const& name) : _name(name)
{
	std::cout << "Character constructor called" << std::endl;
	return ;
}

Character::Character(const Character& other)
{
	*this = other;
	std::cout << "Character copy constructor called" << std::endl;
}

Character&	Character::operator=(const Character& other)
{
	this->_name = other._name;
	std::cout << "Character assignation operator called" << std::endl;
	return *this;
}

Character::~Character(void)
{
	std::cout << "Character destructor called" << std::endl;
	return ;
}

std::string const&	Character::getName(void) const
{
	return this->_name;
}


