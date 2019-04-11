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

CFLAGS=-Wall -Wextra -Werror -pipe
LIB=libft.a
SOURCES=$(wildcard *.c)
OBJECTS=$(SOURCES:.c=.o)

all: $(LIB)

$(LIB):
	$(CC) $(CFLAGS) -c $(SOURCES)
	ar rcs $(LIB) $(OBJECTS)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(LIB)

re: fclean all

.PHONY: all clean fclean re
