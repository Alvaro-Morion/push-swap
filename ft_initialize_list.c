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
	int	i;
	int	temp;

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

// Converts index to binary
char	*ft_to_binary(int n)
{
	int		i;
	int		num;
	char	*bin;

	i = 0;
	num = n;
	while (num / 2)
	{
		i++;
		num = num / 2;
	}
	bin = malloc(sizeof(char) * (i + 2));
	num = i;
	while (i > -1)
	{
		bin[i] = n % 2 + '0';
		n = n / 2;
		i--;
	}
	bin[num + 1] = 0;
	return (bin);
}

// Asigns an ordered and euqally spaced index to each number
int	ft_get_index(int num, int order[])
{
	int	i;

	i = 0;
	while (order[i] != num)
		i++;
	return (i);
}

// Creates the stack with the indices corresponding to the arguments given
t_list	*ft_initialize_stack(int **args, int **order, int size)
{
	t_list	*stack;
	int		i;

	stack = NULL;
	i = 0;
	ft_sort_int_tab(*order, size);
	while (i < size)
	{
		ft_lstadd_back(&stack, ft_new_element(*(*args + i), *order));
		i++;
	}
	free(*order);
	free(*args);
	return (stack);
}
