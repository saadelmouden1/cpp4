#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
{
	private:
		std::string ideas[100];

	public:
	// Constructors
		Brain();
		Brain(const Brain &copy);

		virtual ~Brain();

	// Overloaded Operators
		Brain &operator=(const Brain &src);

	
		const std::string getIdea(size_t i)const;
		const std::string *getIdeaAddress(size_t i)const;
		void setIdea(size_t i, std::string idea);
};

#endif