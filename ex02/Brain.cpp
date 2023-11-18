#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
	return ;
}

Brain::Brain(const Brain& other)
{
	*this = other;
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain&	Brain::operator=(const Brain& other)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = other._ideas[i];
	std::cout << "Brain assignation operator called" << std::endl;
	return *this;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
	return ;
}

void	Brain::setIdea(std::string idea)
{
	for (int i = 0; i < 100; i++)
	{
		if (this->_ideas[i] == "")
		{
			this->_ideas[i] = idea;
			return ;
		}
	}
}

void	Brain::printIdeas(void)
{
	for (int i = 0; i < 100; i++)
	{
		if (this->_ideas[i] != "")
			std::cout << this->_ideas[i] << std::endl;
	}
}

