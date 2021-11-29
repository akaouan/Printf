/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaouan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:12:09 by akaouan           #+#    #+#             */
/*   Updated: 2021/11/29 13:13:59 by akaouan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fonction.h"

int	count_nums(long n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*concat(char *tab, int len, long n)
{
	int	i;

	i = len;
	tab[i--] = '\0';
	while (i >= 0)
	{
		tab[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	return (tab);
}

int	print_int(int num)
{
	int		sign;
	long	n;
	int		len;
	char	tab[30];

	if (num == 0)
	{
		print_char('0');
		return (1);
	}
	n = num;
	sign = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
		sign = 1;
	}
	len = count_nums(n);
	print_str(concat(tab, len, n));
	return (len + sign);
}
