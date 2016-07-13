# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnieto-m <lnieto-m@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/11 11:57:29 by lnieto-m          #+#    #+#              #
#    Updated: 2016/07/11 12:13:36 by lnieto-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

CFLAGS = -Wall -Wextra -Werror

SRCS = megaphone.cpp

NAME = megaphone

all : $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $@ $(SRCS)

fclean:
	rm -rf $(NAME)

re : fclean all
