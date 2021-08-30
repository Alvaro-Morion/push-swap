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

t_list	*ft_lstnew(void *content)
{
	t_list	*nl;

	nl = malloc(sizeof(t_list));
	if (!nl)
		return (NULL);
	nl->content = content;
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

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	while (*lst)
	{
		ptr = *lst;
		del(ptr->content);
		*lst = ptr->next;
		free(ptr);
	}
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	ptr = lst;
	if (!ptr)
		return (NULL);
	while (ptr->next != NULL)
		ptr = ptr->next;
	return (ptr);
}