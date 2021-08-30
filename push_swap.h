/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 09:27:18 by amorion-          #+#    #+#             */
/*   Updated: 2021/08/30 09:27:20 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include<unistd.h>
# include<stdlib.h>

typedef  struct s_list
{
    int index;
	int head;
	int swap;
    struct s_list *next;
} t_list;
long int	ft_atoi_long(const char *nptr);
int			ft_check_repeat(int *ar, int size);
t_list 		*ft_initialize_stack(int **ordered, int size);
t_list 		*ft_lstnew(void *content);
void 		ft_lstadd_front(t_list **list, t_list *new);
void 		ft_lstadd_back(t_list **list, t_list *new);
void 		ft_lst_clear(t_list *lst);
t_list 		*ft_lstlast(t_list *lst);
void		ft_sort_int_tab(int tab[], int size);
#endif
