/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 18:11:53 by amorion-          #+#    #+#             */
/*   Updated: 2021/08/30 18:11:55 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_putstr(char *str)
{
    int i;
    i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}
void    ft_write_iter(int n, char *text)
{
    while(n > 0)
    {
        ft_putstr(text);
        n--;
    }
}