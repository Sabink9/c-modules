CXX = c++
CXXFLAGS = -Wall -Wextra -Werror
NAME = PhoneBook
SRCS = phoneBook.cpp\
	contact.cpp\
	main.cpp
OBJ = $(SRCS:.cpp=.o)

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
