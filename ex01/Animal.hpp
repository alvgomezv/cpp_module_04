#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string	_type;
	
	public:
		Animal(void);
		Animal(const Animal& other);
		Animal&	operator=(const Animal& other);
		virtual ~Animal(void);

		virtual std::string	getType(void) const;
		virtual void		makeSound(void) const;
};

#endif

