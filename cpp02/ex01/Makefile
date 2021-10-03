NAME = Fixed
CC = c++
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror

SRCS =	Fixed.cpp main.cpp

OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re : fclean all