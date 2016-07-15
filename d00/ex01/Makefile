CC = clang++

CFLAGS = -Wall -Wextra -Werror

SRCS = main.cpp \
	   tools.cpp \
	   ClassContact.cpp \

NAME = phonebook

all : $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $@ $(SRCS)

fclean:
	rm -rf $(NAME)

re : fclean all
