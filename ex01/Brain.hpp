#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	private:
		std::string	_ideas[100];
	
	public:
		Brain(void);
		Brain(const Brain& other);
		Brain&	operator=(const Brain& other);
		~Brain(void);

		void	setIdea(std::string idea);
		void	printIdeas(void);
};

#endif

