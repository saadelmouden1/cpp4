#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat Default Constructor called" << std::endl;
	this->brain = new Brain();
	if (this->brain == NULL)
	{
		perror("Cat Brain allocation failed");
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
	}
}

Cat::Cat(const Cat &cat)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	*this = cat;
}

Cat::~Cat()
{
	delete(this->brain);
	std::cout << "Cat Deconstructor called" << std::endl;
}

// Overloaded Operators
Cat &Cat::operator=(const Cat &cat)
{
	std::cout << "Cat Assignation operator called" << std::endl;
	if (this == &cat)
		return *this;

	this->type = cat.type;

	this->brain = new Brain();
	if (this->brain == NULL)
	{
		perror("Cat Brain allocation failed");
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
	}
	*this->brain = *cat.brain;
	return *this;
}

// Public Methods
void	Cat::makeSound(void)const
{
	std::cout << this->getType() << " :**Meeeoow**" << std::endl;
}


void	Cat::getIdeas(void)const
{
	for (int i = 0; i < 3; i++)
		std::cout << "\tIdea " << i << " of the Cat is: \"" << this->brain->getIdea(i) << "\" at the address " << this->brain->getIdeaAddress(i) << std::endl;
}

// Setter
void	Cat::setIdea(size_t i, std::string idea)
{
		this->brain->setIdea(i, idea);
}