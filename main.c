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

int	ft_asign_arg_order(int *args, int *order, char **argv, int argc)
{
	int	i;

	i = 1;
	while (i < argc && ft_atoi_long(argv[i]) >= -2147483648
		&& ft_atoi_long(argv[i]) < 2147483648)
	{	
		args[i - 1] = (int)ft_atoi_long(argv[i]);
		order[i - 1] = args[i - 1];
		i++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	int		*args;
	int		*order;
	t_list	*stack_a;

	args = malloc(sizeof(int) * (argc - 1));
	order = malloc(sizeof(int) * (argc - 1));
	if (argc < 2 || ft_asign_arg_order(args, order, argv, argc) < argc
		|| ft_check_repeat(args, argc - 1))
		exit(write(1, "Error\n", 6));
	stack_a = ft_initialize_stack(args, order, argc - 1);
	free(args);
	free(order);
	if (ft_is_ordered(stack_a))
		return (0);
	else if (argc < 7)
		ft_sort_small(&stack_a, argc - 1);
	else
		ft_radix_sort(&stack_a, ft_max_len(stack_a), argc - 1);
	return (0);
}
