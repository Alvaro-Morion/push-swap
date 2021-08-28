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

/* Modificada para que devuelva un long int y detectarlo después como un error*/
long int ft_atoi_long(const char *nptr)
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
	if (*nprt >='9' || *prtr <= '0')
		return(2147483648)
	while (*nptr <= '9' && *nptr >= '0')
	{
		n = n * 10 + *nptr - '0';
		nptr++;
	}
	if (*nptr != 0)
		return(2147483648)
	return (n * s);
}
