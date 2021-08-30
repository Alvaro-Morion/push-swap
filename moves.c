/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 15:05:12 by amorion-          #+#    #+#             */
/*   Updated: 2021/08/30 15:05:14 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include<stdio.h>

// Exchanges first and second elements in the stack
void    ft_swap(t_list **stack)
{
	t_list *temp;

	if (!(*stack)->next)
		return;
	temp = (*stack)->next;
	(*stack)->next = (*stack)->next->next;
	temp -> next = *stack;
	*stack = temp;
}

// Upshifts elements one place (first -> last)
void    ft_rotate(t_list **stack)
{
	t_list *temp;
	if (!(*stack)->next)
		return;
	temp = (*stack)->next;
	ft_lstlast(*stack)->next = *stack;
	(*stack)->next = NULL;
	*stack = temp;
}
// Downshifts elements one place (last -> first)
void	ft_rev_rotate(t_list **stack)
{
	t_list *ptr;
	t_list *last;
	if(!(*stack)->next)
		return;
	last = ft_lstlast(*stack);
	last->next = *stack;
	ptr = *stack;
	*stack = last;
	while(ptr->next != last)
		ptr = ptr->next;
	ptr->next = NULL;
}

//Moves first element of origin to first place in dest.