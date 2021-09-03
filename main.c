/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 09:23:03 by amorion-          #+#    #+#             */
/*   Updated: 2021/08/30 09:23:10 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include<stdio.h>
int	main(int argc, char **argv)
{
    int i;
	int args[argc - 1];
	int order[argc - 1];
	t_list *stack_a;
	t_list *ptr;

	// Gestión de errores y crea el array a ordenar.
	i = 1;
	while (i < argc && ft_atoi_long(argv[i]) >= -2147483648 && ft_atoi_long(argv[i]) < 2147483648)
	{	
		args[i - 1] = (int)ft_atoi_long(argv[i]);
		order[i - 1]= args[i - 1];
		i++;
	}
	if (argc < 2 || i < argc || ft_check_repeat(args, argc - 1))
		exit(write(1, "Error\n", 6));
	// forma la lista del stack a y la ordena normaalmente para asignar los índices.
	stack_a = ft_initialize_stack(args, order, argc - 1);
	/*ptr = stack_a;
	while(ptr)
	{
		printf("%d, %s, %d\n", ptr->index, ptr->binary, ptr->len);
		ptr = ptr->next;
	}*/
	if (ft_is_ordered(stack_a))
		return(0);
	ft_radix_sort(&stack_a, ft_max_len(stack_a));
	ptr = stack_a;
	while(ptr)
	{
		printf("%d, %s, %d\n", ptr->index, ptr->binary, ptr->len);
		ptr = ptr->next;
	}
	return(0);
}