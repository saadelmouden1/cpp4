#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{

	private:
		Brain *brain;
	public:
		Dog();
		Dog(const Dog &dog);

		~Dog();

	// Overloaded Operators
		Dog &operator=(const Dog &dog);

		void makeSound(void)const;

		void getIdeas(void)const;
		void setIdea(size_t i, std::string idea);
};

#endif