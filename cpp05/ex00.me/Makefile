NAME = Bureaucrat

CFLAGS = -Wall -Wextra -Werror -std=c++98

CC  = clang++

SRC =	main.cpp \
		Bureaucrat.cpp

HDR =	Bureaucrat.hpp


OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HDR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)