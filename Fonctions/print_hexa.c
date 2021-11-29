/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaouan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:10:16 by akaouan           #+#    #+#             */
/*   Updated: 2021/11/29 13:11:36 by akaouan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fonction.h"

int	count_hexat(long n)
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

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	print_hexa(long n)
{
	char	*tab_hexa;
	char	tab[30];
	int		counter;
	int		i;

	if (n == 0)
	{
		print_char('0');
		return (1);
	}
	counter = count_hexat(n);
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
