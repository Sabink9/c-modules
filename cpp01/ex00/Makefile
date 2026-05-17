CXX = c++
CXXFLAGS = -Wall -Wextra -Werror
NAME = Zombie
SRCS = Zombie.cpp\
	newZombie.cpp\
	randomChump.cpp\
	main.cpp
OBJ = $(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
clean:
	rm -rf $(OBJ)
fclean:	clean
	rm -rf $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
