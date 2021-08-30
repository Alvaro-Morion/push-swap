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
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int	main(int argc, char **argv)
{
    int i;
	int args[argc - 1];
	int order[argc - 1];
	//t_list *stack_a;

	// Gestión de errores y crea el array a ordenar.
	i = 1;
	while (i < argc && ft_atoi_long(argv[i]) >= -2147483648 && ft_atoi_long(argv[i]) < 2147483648)
	{	
		args[i - 1] = (int)ft_atoi_long(argv[i]);
		order[i - 1]= args[i - 1];
		i++;
	}
	if (argc < 2 || i < argc || ft_check_repeat(args, argc))
	{	
		write(1, "Error\n", 6);
		//system("leaks a.out");
		return(0);
	}
	ft_sort_int_tab(order, argc - 1);
	printf("%d\n", order[1]);
	system("leaks a.out");
	return(0);
	/*if (argc < 7)
		return(ft_sort5(stack_a));
	
	return(0);*/
}
