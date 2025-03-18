#include "Dog.hpp"

Dog::Dog():type("Dog"):animal()
{
	std::cout << "Dog Default Constructor called" << std::endl;
}

Dog::Dog(const Dog &dog):animal()
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	*this = dog;
}


Dog::~Dog()
{
	std::cout << "Dog Deconstructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &dog)
{
	std::cout << "Dog Assignation operator called" << std::endl;
	if (this == &dog)
		return *this;

	this->type = dog.type;
	return *this;
}

void	Dog::makeSound(void)const
{
	std::cout << this->getType() << ": **Woof**" << std::endl;
}