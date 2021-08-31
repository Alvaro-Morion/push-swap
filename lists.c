/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 09:56:29 by amorion-          #+#    #+#             */
/*   Updated: 2021/08/30 09:56:31 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
t_list	*ft_new_element(int num, int order[])
{
	t_list	*nl;

	nl = malloc(sizeof(t_list));
	if (!nl)
		return (NULL);
	nl->index = ft_get_index(num, order);
	nl->move = 0;
	nl->next = NULL;
	return (nl);
}

void	ft_lstadd_front(t_list **list, t_list *new)
{
	new->next = *list;
	*list = new;
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	ptr = *lst;
	if (*lst == NULL)
		*lst = new;
	else
	{
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new;
	}
}

t_list *ft_lstlast(t_list *lst)
{
	t_list	*ptr;
	ptr = lst;
	if (!ptr)
		return(NULL);
	while (ptr->next)
		ptr = ptr->next;
	return(ptr);
}