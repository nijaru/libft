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
SOURCES=$(wildcard *.c)
OBJECTS=$(SOURCES:.c=.o)

all: $(NAME)

$(NAME):
	cc -Wall -Wextra -Werror -pipe -c $(SOURCES)
	ar rcs $(NAME) $(OBJECTS)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
