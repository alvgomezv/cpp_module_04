#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include <string>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria*	_materia[4];
	
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource& other);
		MateriaSource&	operator=(const MateriaSource& other);
		virtual ~MateriaSource(void);

		void		learnMateria(AMateria* m);
		AMateria*	createMateria(const std::string& type);
};
#endif

