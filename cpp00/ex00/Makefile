CXX = c++
CXXFLAGS = -Wall -Wextra -Werror
NAME = megaphone
SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(FLAGS) -c $< -o $@
clean:
	rm -rf $(OBJ)
fclean:	clean
	rm -rf $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
