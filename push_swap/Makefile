# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmathivh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/24 12:07:08 by mmathivh          #+#    #+#              #
#    Updated: 2018/08/30 09:06:58 by mmathivh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ./srcs/helpers.c ./srcs/instruction.c ./srcs/opo.c ./srcs/algo.c ./srcs/free_mem.c ./srcs/validate.c ./srcs/libft/libft.a
CHECKER = ./srcs/checker.c
PUSH = ./srcs/push_swap.c
FILE_CHECKER = checker
FILE_PUSH = push_swap
FLAGS = -Wall -Wextra -Werror

all:
	make -C ./srcs/libft
	gcc -o checker $(CHECKER) $(SRC) $(FLAGS)
	gcc -o push_swap $(PUSH) $(SRC) $(FLAGS)
clean:
	make clean -C ./srcs/libft
	rm -f $(FILE_CHECKER)
	rm -f $(FILE_PUSH)
fclean: clean
	make fclean -C ./srcs/libft
re: fclean all
	make re -C ./srcs/libft
norm:
	norminette ./srcs/*.c
	norminette ./srcs/push_swap.h
