#include "Cat.hpp"

Cat::Cat(): Animal()
{
	this->type = "Cat";
	std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::Cat(const Cat &cat): Animal()
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	*this = cat;
}

Cat::~Cat()
{
	std::cout << "Cat Deconstructor called" << std::endl;
}

// Overloaded Operators
Cat &Cat::operator=(const Cat &cat)
{
	std::cout << "Cat Assignation operator called" << std::endl;
	if (this == &cat)
		return *this;

	this->type = cat.type;
	return *this;
}

// Public Methods
void	Cat::makeSound(void)const
{
	std::cout << this->getType() << " :**Meeeoow**" << std::endl;
}
