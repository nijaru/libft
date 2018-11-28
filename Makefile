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

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
SRC = \
				# libc
				ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memccpy.c \
				ft_memmove.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strlen.c \
				ft_strdup.c \
				ft_strcpy.c \
				ft_strncpy.c \
				ft_strcat.c \
				ft_strncat.c \
				ft_strlcat.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strstr.c \
				ft_strnstr.c \
				ft_strcmp.c \
				ft_strncmp.c \
				ft_atoi.c \
				ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_toupper.c \
				ft_tolower.c \
				# self
				ft_islower.c \
				ft_isupper.c \
				# ft_countwords.c \
				# part2
				ft_memalloc.c \
				ft_memdel.c \
				ft_strnew.c \
				ft_strdel.c \
				ft_strclr.c \
				ft_striter.c \
				ft_striteri.c \
				ft_strmap.c \
				ft_strmapi.c \
				ft_strequ.c \
				ft_strnequ.c \
				ft_strsub.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_strsplit.c \
				ft_itoa.c \
				ft_putchar.c \
				ft_putstr.c \
				ft_putendl.c \
				ft_putnbr.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_lstnew.c \
				ft_lstdelone.c \
				ft_lstdel.c \
				ft_lstadd.c \
				ft_lstiter.c \
				ft_lstmap.c \
				ft_strndup.c \
				ft_capitalize.c \
				ft_lst_reverse.c \
				ft_realloc.c \
				ft_strjoinch.c \
				ft_strnchr.c \
				ft_copyuntil.c \
				ft_strstartswith.c \
				ft_intlen.c \
				ft_strendswith.c \
				ft_pathjoin.c \
				ft_lstaddback.c \
				ft_putnstr.c \
				ft_strreplace.c \
				ft_isemptystr.c \
				ft_strsplitall.c \
				ft_countwordsall.c \
				ft_freestrarr.c \
				ft_strjoincl.c \
				ft_strjoinchcl.c \
				ft_count2darray.c \
				ft_strarrmax.c \
				ft_get_parent_path.c

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(SRC)
	cc $(CFLAGS) $(SRC)

clean: rm $(OBJ)
	rm $(SRC)

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: clean fclean all re
