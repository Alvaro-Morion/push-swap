/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 18:08:45 by amorion-          #+#    #+#             */
/*   Updated: 2021/08/02 13:29:20 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Para transformar los argumentos dados a núumeros (pudiendo ser mallores que
int)*/
long int	ft_atoi_long(const char *nptr)
{
	long int	n;
	long int	s;

	n = 0;
	s = 1;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			s = -1;
		nptr++;
	}
	if (*nptr > '9' || *nptr < '0')
		return (2147483648);
	while (*nptr <= '9' && *nptr >= '0')
	{
		n = n * 10 + *nptr - '0';
		nptr++;
	}
	if (*nptr != 0)
		return (2147483648);
	return (n * s);
}

/* Comprueba si hay repeticiones entre los argumentos.*/
int	ft_check_repeat(int *ar, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (ar[j] == ar[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
