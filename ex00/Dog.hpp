#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{

	public:
		Dog();
		Dog(const Dog &dog);

		~Dog();

	// Overloaded Operators
		Dog &operator=(const Dog &dog);

		void makeSound(void)const;

};

#endif