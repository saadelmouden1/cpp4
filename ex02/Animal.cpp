#include "Animal.hpp"

Animal::Animal():type("default")
{
	std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal(const Animal &animal)
{
	std::cout << "Animal Copy Constructor called" << std::endl;
	*this = animal;
}


Animal::~Animal()
{
	std::cout << "Animal Deconstructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &animal)
{
	std::cout << "Animal Assignation operator called" << std::endl;
	if (this == &animal)
		return *this;

	this->type = animal.type;
	return *this;
}


void Animal::makeSound(void)const
{
}

std::string	Animal::getType(void)const
{
    return (this->type);
}