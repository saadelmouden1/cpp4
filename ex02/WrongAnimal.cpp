#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("default")
{
	std::cout << "WrongAnimal Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &animal)
{
	std::cout << "WrongAnimal Copy Constructor called" << std::endl;
	*this = animal;
}


WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Deconstructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &animal)
{
	std::cout << "WrongAnimal Assignation operator called" << std::endl;
	if (this == &animal)
		return *this;

	this->type = animal.type;
	return *this;
}


void WrongAnimal::makeSound(void)const
{
    std::cout << "This Wronganimal doesn't make any sound." << std::endl;
  
}

std::string	WrongAnimal::getType(void)const
{
    return (this->type);
}