# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amorion- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/31 15:32:38 by amorion-          #+#    #+#              #
#    Updated: 2021/08/31 15:35:25 by amorion-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = errors.c ft_initialize_list.c lists.c main.c moves.c ordered_bubble_a.c

ARG = 170530406 -208786906 -645009599 784090994 -671413929

all:
	@gcc -Wall -Werror -Wextra ${SRCS} && ./a.out ${ARG} | ./checker_Mac ${ARG}
	@gcc -Wall -Werror -Wextra ${SRCS} && ./a.out ${ARG} | wc -l
test:
	@gcc -Wall -Werror -Wextra ${SRCS} && ./a.out ${ARG}
