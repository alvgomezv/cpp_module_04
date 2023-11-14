#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : _materia()
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	return ;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	*this = other;
	std::cout << "MateriaSource copy constructor called" << std::endl;
	return ;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& other)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_materia[i] != NULL)
			delete this->_materia[i];
		this->_materia[i] = other._materia[i]->clone();
	}
	std::cout << "MateriaSource assignation operator called" << std::endl;
	return *this;
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource destructor called" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		if (this->_materia[i] != NULL)
			delete this->_materia[i];
	}
	return ;
}

void	MateriaSource::learnMaterial(AMateria *m)
{	
	for(int i = 0; i < 4; i++)
	{
		if (this->_materia[i] == NULL)
		{
			this->_materia[i] = m->clone();
			break ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_materia[i] != NULL && this->_materia[i]->getType() == type)
			return this->_materia[i]->clone();
	}
	return NULL;
}