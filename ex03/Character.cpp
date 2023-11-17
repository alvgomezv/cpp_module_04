#include "Character.hpp"

Character::Character(void)
{
	// std::cout << "Character default constructor called" << std::endl;
	return ;
}

Character::Character(std::string const& name) : _name(name), _inventory()
{
	// std::cout << "Character constructor called" << std::endl;
	return ;
}

Character::Character(const Character& other)
{
	*this = other;
	// std::cout << "Character copy constructor called" << std::endl;
}

Character&	Character::operator=(const Character& other)
{
	this->_name = other._name;
	for(int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
		this->_inventory[i] = other._inventory[i]->clone();
	}
	std::cout << "Character assignation operator called" << std::endl;
	return *this;
}

Character::~Character(void)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
		{
			// std::cout << "Deleting from inventory materia " << i << std::endl;
			delete this->_inventory[i];
		}
	}
	// std::cout << "Character destructor called" << std::endl;
	return ;
}

std::string const&	Character::getName(void) const
{
	return this->_name;
}

void	Character::equip(AMateria* m)
{
	for(int i = 0; i < 4 ; ++i)
		if (_inventory[i] == NULL && _inventory[i] == m)
			return;
	for(int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			break ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && this->_inventory[idx] != NULL)
		this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
}


