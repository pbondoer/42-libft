# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbondoer <pbondoer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/01 21:02:30 by pbondoer          #+#    #+#              #
#    Updated: 2015/12/07 20:38:03 by pbondoer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRC		= $(shell ls | grep \.c)
OBJ		= $(SRC:.c=.o)
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

all: $(NAME)

%.o:%.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

test: fclean all fclean
