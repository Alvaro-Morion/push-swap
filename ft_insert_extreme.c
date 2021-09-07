/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_extreme.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:09:01 by amorion-          #+#    #+#             */
/*   Updated: 2021/09/07 17:09:02 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_insert_extreme(t_list **stack_a, t_list **stack_b, int *min,
	int *max)
{
	write(1, "pa\n", 3);
	ft_push(stack_b, stack_a);
	if ((*stack_a)->index < *min)
		*min = (*stack_a)->index;
	else
	{
		write(1, "ra\n", 3);
		*max = (*stack_a)->index;
		ft_rotate(stack_a);
	}
}
