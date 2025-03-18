#include "Animal.hpp"

class Cat: public Animal
{

    private:

	public:
	// Constructors
		Cat();
		Cat(const Cat &cat);

		~Cat();

	// Overloaded Operators
		Cat &operator=(const Cat &cat);

	// Public Methods
		void makeSound(void)const;

};