#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : _materia()
{
	// std::cout << "MateriaSource default constructor called" << std::endl;
	return ;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	*this = other;
	// std::cout << "MateriaSource copy constructor called" << std::endl;
	return ;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& other)
{
	for(int i = 0; i < 4; i++)
		delete this->_materia[i];
	for(int i = 0; i < 4; i++)
		this->_materia[i] = other._materia[i];
	// std::cout << "MateriaSource assignation operator called" << std::endl;
	return *this;
}

MateriaSource::~MateriaSource(void)
{
	for(int i = 0; i < 4; i++)
		if (this->_materia[i] != NULL)
		{
			// std::cout << "Deleting materia " << i << std::endl;
			delete this->_materia[i];
		}
	// std::cout << "MateriaSource destructor called" << std::endl;
	return ;
}

void	MateriaSource::learnMateria(AMateria *m)
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