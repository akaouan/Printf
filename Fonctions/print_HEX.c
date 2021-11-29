/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_HEX.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaouan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:02:34 by akaouan           #+#    #+#             */
/*   Updated: 2021/11/29 13:07:45 by akaouan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fonction.h"

int	print_hex(long n)
{
	char	*tab_hex;
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
	tab_hex = "0123456789ABCDEF";
	tab[i--] = '\0';
	while (i >= 0)
	{
		tab[i] = tab_hex[n % 16];
		n /= 16;
		i--;
	}
	print_str(tab);
	i = ft_strlen(tab);
	return (i);
}
