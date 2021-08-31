/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 16:43:24 by amorion-          #+#    #+#             */
/*   Updated: 2021/08/30 16:43:26 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
void ft_restart_push(t_list *stack)
{
	t_list *ptr;
	ptr = stack;
	while(ptr)
	{
		ptr->push = 0;
		ptr = ptr->next;
	}
}
int ft_set_push(t_list *stack_a)
{
	int n;
	int c;
	int index;
	t_list *ptr;

	n = 0;
	c = 0;
	ft_restart_push(stack_a);
	while(!stack_a->head)
	{
		ft_rotate(&stack_a);
		n++;
	}
	index = 0;
	ptr = stack_a;
	while(ptr->next)
	{
		if(ptr->index != index)
		{
			ptr->push = 1;
			c++;
		}
		else
			index++;
		ptr = ptr->next;
	}
	while(n > 0)
	{
		ft_rev_rotate(&stack_a);
		n--;
	}
	return(c);
}
// Pensar cómo arreglar esto.
void	ft_swap_stack(t_list *stack_a, int pmax)
{
	t_list *ptr;
	int np;
	ptr = stack_a;
	while(ptr && ptr->next)
	{
		if (ptr->push && !(ptr->next->push))
		{
			ft_swap(&ptr);
			np = ft_set_push(stack_a);
			ft_swap(&ptr);
			if (pmax > np)
			{
				pmax = np;
				ptr->swap = 1;
				ptr = ptr->next;
			}	
		}
		ptr = ptr->next;
	}
}

void	ft_swapper(t_list **stack)
{
	int mark;
	t_list	*ptr;

	mark = 0;
	ptr = *stack;
	while(ptr)
	{
		if (ptr->swap)
		{
			ptr->swap = 0;
			while(mark > 0)
			{
				write(1, "ra\n", 3);
				ft_rotate(stack);
				mark--;
			}
			write(1, "sa\n", 3);
			ft_swap(stack);
			ptr = *stack;
		}
		ptr = ptr->next;
		mark++;
	}
	ft_restart_push(*stack);
	ft_set_push(*stack);
}

void    ft_push_swap(t_list *stack_a, int argc)
{
	(void)argc;
	int pmax;
	//t_list *ptr;
	pmax = ft_set_push(stack_a);
	/*printf("Inicial\n");
	ptr = stack_a;
	while(ptr)
	{
		printf("%d %d %d\n", ptr->index, ptr->push, ptr->swap);
		ptr = ptr->next;
	}*/
	ft_swap_stack(stack_a, pmax);
	
	/*printf("Antes de push\n");
	ptr = stack_a;
	while(ptr)
	{
		printf("%d %d %d\n", ptr->index, ptr->push, ptr->swap);
		ptr = ptr->next;
	}*/
	ft_swapper(&stack_a);
	ft_pusher(&stack_a);
	ft_align(&stack_a, argc - 1);
	/*ptr = stack_a;
	while(ptr)
	{
		printf("%d %d %d\n", ptr->index, ptr->push, ptr->swap);
		ptr = ptr->next;
	}*/
}