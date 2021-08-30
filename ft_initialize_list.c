/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 09:51:03 by amorion-          #+#    #+#             */
/*   Updated: 2021/08/30 09:51:06 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"
// Sort the array as a normal person would do
void	ft_sort_int_tab(int tab[], int size)
{
	int i;
	int temp;

	i = 0;
    while (i < size - 1)
	{
		if (tab[i] < tab[i + 1])
			i++;
	   	else
		{
			temp = tab[i];
    		tab[i] = tab[i + 1];
    		tab[i + 1] = temp;
    		i = 0;           
    	}
	}
}

// Initialize stack a y sorts the array
/*t_list  *ft_initialize_stack(int **args, int size)
{
	return(0);
}*/