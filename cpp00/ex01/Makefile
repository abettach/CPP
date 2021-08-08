NAME = Phonebook
CC = c++
CFLAGS = -Wall -Wextra -Werror

SRCS =	PhoneBook.cpp	\
		contact.cpp \
		main.cpp \
		print_contact_info.cpp

OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

test:
	@make re --no-print-directory
	@make clean --no-print-directory
	./Phonebook
clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf Phonebook

re : fclean all