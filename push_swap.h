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
	int push;
    struct s_list *next;
} t_list;
long int	ft_atoi_long(const char *nptr);
int			ft_check_repeat(int *ar, int size);
void		ft_sort_int_tab(int tab[], int size);
t_list 		*ft_initialize_stack(int args[], int order[], int size);
int         ft_get_index(int num, int order[]);
t_list 		*ft_new_element(int content, int order[]);
void 		ft_lstadd_front(t_list **list, t_list *new);
void 		ft_lstadd_back(t_list **list, t_list *new);
void        ft_lstadd_front(t_list **list, t_list *new);
t_list      *ft_lstlast(t_list *lst);
void        ft_swap(t_list **stack);
void        ft_rotate(t_list **stack);
void        ft_rev_rotate(t_list **stack);
void        ft_push(t_list **start, t_list **dest);
void        ft_push_swap(t_list *stack_a, int argc);
int         ft_set_push(t_list *stack_a);
void        ft_set_swap(t_list *stack_a, int pmax);
void        ft_pusher(t_list **stack);
void        ft_align(t_list **stack, int size);
void        ft_write_iter(int n, char *text);
#endif
