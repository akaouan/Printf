/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_adress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaouan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:06:09 by akaouan           #+#    #+#             */
/*   Updated: 2021/11/29 13:12:01 by akaouan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fonction.h"

static	int	count_hexat2(unsigned long n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}

static	int	print_hexa2(unsigned long n)
{
	char	*tab_hexa;
	char	tab[30];
	int		counter;
	int		i;

	counter = count_hexat2(n);
	i = counter;
	tab_hexa = "0123456789abcdef";
	tab[i--] = '\0';
	while (i >= 0)
	{
		tab[i] = tab_hexa[n % 16];
		n /= 16;
		i--;
	}
	print_str(tab);
	i = ft_strlen(tab);
	return (i);
}

int	print_adress(void *s)
{
	long	n;

	n = (long)s;
	if (n == 0)
	{
		print_str("0x0");
		return (3);
	}
	print_str("0x");
	return ((print_hexa2(n) + 2));
}
