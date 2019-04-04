# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrusso <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/26 15:48:26 by nrusso            #+#    #+#              #
#    Updated: 2018/11/27 17:34:12 by nrusso           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CFLAGS=-Wall -Wextra -Werror -O0 -g0 -pipe
SOURCES=*.c
OBJ=*.o

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(SOURCES)
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all re
