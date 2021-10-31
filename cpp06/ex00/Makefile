NAME = conversion
FLAGS = #-Wall -Wextra -Werror -std=c++98
CC = clang++
RM = rm -rf

SRCS = main.cpp conversion.cpp ft_check.cpp ft_print.cpp

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