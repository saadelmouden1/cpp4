#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat Default Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cat)
{
	std::cout << "WrongCat Copy Constructor called" << std::endl;
	*this = cat;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Deconstructor called" << std::endl;
}

// Overloaded Operators
WrongCat &WrongCat::operator=(const WrongCat &cat)
{
	std::cout << "WrongCat Assignation operator called" << std::endl;
	if (this == &cat)
		return *this;

	this->type = cat.type;
	return *this;
}

// Public Methods
void	WrongCat::makeSound(void)const
{
	std::cout << this->getType() << " :**Meeeoow**" << std::endl;
}