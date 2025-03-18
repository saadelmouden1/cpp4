#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
class WrongAnimal
{
	protected:
		std::string type;

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &animal);

		virtual ~WrongAnimal();

	// Overloaded Operators
		WrongAnimal &operator=(const WrongAnimal &animal);

		virtual void makeSound(void)const;
		std::string getType(void)const;

};

#endif