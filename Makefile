# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wahmed <wahmed@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/01 19:21:15 by wahmed            #+#    #+#              #
#    Updated: 2023/11/02 17:36:48 by wahmed           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRC = push_swap.c \
		op_a.c 	op_b.c 	mini_max.c 	parsing.c 	sortbig.c  sorting.c extra.c error.c \
		
CFLAGS = -Wall -Wextra -Werror
CC = cc
OBJ = $(SRC:.c=.o)
LIBS = ./libft/libft.a 

all : $(NAME)

$(NAME) : $(OBJ)
	make bonus -C libft/.
	$(CC) $(CFLAGS) $(OBJ) $(LIBS) -o $(NAME)
	
	
clean: 
	@rm -f *.o
	@make clean -C libft/.
		
fclean: clean
	@rm -f $(NAME)
	@rm -f libft/libft.a
	@rm -f push_swap
	
re : fclean all	