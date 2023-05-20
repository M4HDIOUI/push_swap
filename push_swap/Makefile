# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/30 18:31:42 by omahdiou          #+#    #+#              #
#    Updated: 2023/05/19 13:10:23 by omahdiou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC= cc

CFLAGS= -Wall -Wextra -Werror

HDR = push_swap.h

SRC =  ft_split.c instraction.c instraction1.c instraction2.c instraction3.c low_sort_utils.c parsing.c parsing_utils.c push_swap.c big_sort.c sort_utils.c sort.c utils.c utils1.c utils2.c

OBJ = $(SRC:.c=.o)

NAME = push_swap

all: push_swap

$(NAME) : $(OBJ)
	$(CC)  $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.c $(HDR)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf  $(OBJ) $(NAME)

fclean: clean
	rm -rf $(NAME)

re: fclean all