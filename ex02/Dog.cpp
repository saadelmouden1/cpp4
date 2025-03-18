#include "Dog.hpp"

Dog::Dog()
{
	type= "Dog";
	std::cout << "Dog Default Constructor called" << std::endl;
	this->brain = new Brain();
	if (this->brain == NULL)
	{
		perror("Dog Brain allocation failed");
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
	}
}

Dog::Dog(const Dog &dog)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	*this = dog;
}


Dog::~Dog()
{
	delete(this->brain);
	std::cout << "Dog Deconstructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &dog)
{
	std::cout << "Dog Assignation operator called" << std::endl;
	if (this == &dog)
		return *this;

	this->type = dog.type;
	this->brain = new Brain();
	if (this->brain == NULL)
	{
		perror("Dog Brain allocation failed");
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
	}
	*this->brain = *dog.brain;
	return *this;
}

void	Dog::makeSound(void)const
{
	std::cout << this->getType() << ": Woof" << std::endl;
}

void	Dog::getIdeas(void)const
{
	for (int i = 0; i < 3; i++)// change the 3 to 100 to show all ideas
		std::cout << "\tIdea " << i << " of the Dog is: \"" << this->brain->getIdea(i) << "\" at the address " << this->brain->getIdeaAddress(i) << std::endl;
}

// Setter
void	Dog::setIdea(size_t i, std::string idea)
{
		this->brain->setIdea(i, idea);
}