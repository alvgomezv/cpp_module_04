#include "Dog.hpp"
#include "Cat.hpp"


int main(void)
{
	Animal *animals[6];

	for (int i = 0; i < 3; i++)
		animals[i] = new Dog();
	for (int i = 3; i < 6; i++)
		animals[i] = new Cat();

	for (int i = 0; i < 6; i++)
		delete animals[i];

	Cat *cat = new Cat();
	cat->getBrain()->setIdea("---La vida es bella");
	cat->getBrain()->printIdeas();

	Cat *cat2 = new Cat(*cat);
	cat2->getBrain()->printIdeas();

	delete cat;
	delete cat2;

	//CHECK LEAKS

	return 0;
}