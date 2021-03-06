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

SRCS = errors.c free.c ft_initialize_list.c ft_insert_extreme.c lists.c main.c moves.c ordered.c sort_small.c split.c

OBJS = ${SRCS:.c=.o}

NAME = push_swap

ARG = "-200134935 -815351400 694375356 -917686579 180099659 849139637 -478386034 -384879084 -511318695 715988373 -955891565 -904426235 303759164 -590014039 824914304 807190163 547864567 900117443 371349329 -520142544 -978663847 519575218 806251281 -426647023 -838223258 -111470099 353628954 662970835 901663572 -827515781 -453584420 -757631706 -453601236 -288222292 -471012662 697976827 -133839924 -614929190 203061858 328960600 317275619 150296714 419244354 983659562 757262585 299542989 350141950 -428609680 -302238838 4618639 319303266 -987466373 890597256 -826770960 -123104812 389808182 -389384657 110844796 88544677 -140557204 342758149 161966891 -497306862 -310424291 358685039 828177825 -10684599 -363839727 -862701473 616372161 745683498 587066418 349086129 562230016 542202812 85565434 18875749 949856548 -753479003 -398710195 -792278240 937743695 -17753680 887365185 -652761691 -141836832 -690644927 524876507 551262505 409979503 -704803203 -234163796 448853332 -808370575 -744242256 275145142 -332062980 -713228506 849620977 -166922134"

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
