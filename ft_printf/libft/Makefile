# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egaguirr <egaguirr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/02 14:46:44 by egaguirr          #+#    #+#              #
#    Updated: 2023/02/01 17:15:42 by egaguirr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

COLOUR_GREEN=\033[0;32m
COLOUR_RED=\033[0;31m
COLOUR_BLUE=\033[0;34m
COLOUR_END=\033[0m

CC = gcc -c

INCLUDE = libft.h

FLAGS = -Wall -Wextra -Werror

AR = ar rc

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

OBJ = $(SRCS:.c=.o)

BONUSSRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c 

BONUSOBJ = $(BONUSSRCS:.c=.o)

all:	$(NAME)

$(NAME):

	@$(CC) $(FLAGS) $(SRCS)

	@$(AR) $(NAME) $(OBJ)

	@ranlib	$(NAME)


bonus:
	@$(CC) $(FLAGS) $(BONUSSRCS)

	@$(AR) $(NAME) $(BONUSOBJ)

	@ranlib $(NAME)

clean:
	@/bin/rm -rf $(OBJ) $(BONUSOBJ)


fclean: clean
	@/bin/rm -rf $(NAME)


re: fclean all

rebonus: fclean bonus

.PHONY: all clean fclean re

