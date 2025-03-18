#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
//#include <string.h>
class Animal
{
	protected:
		std::string type;

	public:
		Animal();
		Animal(const Animal &animal);
        
		virtual ~Animal();
		Animal &operator=(const Animal &animal);


		virtual void makeSound(void)const;

		std::string getType(void)const;

};

#endif