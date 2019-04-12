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

SOURCES=$(wildcard *.c)
OBJECTS=$(SOURCES:.c=.o)

all: libft.a

libft.a: 
	cc -Wall -Wextra -Werror -pipe -c $(SOURCES)
	ar rcs libft.a $(OBJECTS)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) libft.a

re: fclean all

.PHONY: all clean fclean re
