NAME=out
CXXFLAGS=-Wall -Wextra -Werror
CXX=c++ -std=c++98
CPP_FILES=main.cpp ClapTrap.cpp
O_FILES=${CPP_FILES:.cpp=.o}

all:$(NAME)

$(NAME):$(O_FILES)
	$(CXX) $(CXXFLAGS) $(O_FILES) -o  $(NAME)

clean:
	rm -f $(O_FILES)
fclean:clean
	rm -f $(NAME)
re:fclean all
