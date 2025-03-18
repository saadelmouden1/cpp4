#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{

    private:
		Brain *brain;
	public:
	// Constructors
		Cat();
		Cat(const Cat &cat);

		~Cat();

	// Overloaded Operators
		Cat &operator=(const Cat &cat);

	// Public Methods
		void makeSound(void)const;
		void getIdeas(void)const;
	// Setter
		void setIdea(size_t i, std::string idea);

};

#endif