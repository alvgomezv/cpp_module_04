#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;
	
	public:
		AMateria(void);
		AMateria(const std::string& type);
		AMateria(const AMateria& other);
		AMateria&	operator=(const AMateria& other);
		virtual ~AMateria(void); 

		std::string const	&getType(void) const; //Returns the materia type

		virtual AMateria*	clone(void) const = 0;
		virtual void		use(ICharacter& target);
};

#endif

