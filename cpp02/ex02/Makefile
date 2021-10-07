NAME = Fixed
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = clang++
RM = rm -rf

SRCS = Fixed.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

%.o:%.cpp *.hpp
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: clean all