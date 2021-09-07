# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amorion- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/31 15:32:38 by amorion-          #+#    #+#              #
#    Updated: 2021/09/04 14:36:07 by amorion-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = errors.c free.c ft_initialize_list.c lists.c main.c moves.c ordered.c sort_small.c split.c

OBJS = ${SRCS:.c=.o}

NAME = push_swap

ARG = "998729607 -551666920 803683021 691058166 361615938"

.c.o:
	@gcc -Wall -Werror -Wextra -c $< -o  ${<:.c=.o} 
all: ${NAME}

${NAME}: ${OBJS}
	@gcc -Wall -Werror -Wextra -fsanitize=address ${OBJS} -o ${NAME}
	@echo "Executable generated"
clean:
	@rm -rf ${OBJS}
	@echo ".o files removed"
fclean: clean
	@rm -rf ${NAME}
	@echo "binary file removed"
re: fclean all

norm: 
	@norminette ${SRCS} push_swap.h
test: ${NAME}
	@./push_swap ${ARG} | cat -e
	@./push_swap ${ARG} | ./checker_Mac ${ARG} | cat -e
	@./push_swap ${ARG}	| wc -l
