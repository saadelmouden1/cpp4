NAME = Polymorphism


CPP = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -f
HEADERS = Animal.hpp Dog.hpp Cat.hpp  WrongAnimal.hpp WrongCat.hpp 
SRCS = Animal.cpp Dog.cpp Cat.cpp main.cpp WrongAnimal.cpp WrongCat.cpp 


OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp $(HEADERS)
		$(CPP) $(CPPFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS) 
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)


clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re : fclean all