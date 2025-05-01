#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
const WrongAnimal* meta = new WrongAnimal();
const Animal* j = new Dog();
const WrongAnimal* i = new WrongCat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the wrong sound!
j->makeSound();
meta->makeSound();

delete meta;
delete i;
delete j;

return 0;
}