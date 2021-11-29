/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaouan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:15:46 by akaouan           #+#    #+#             */
/*   Updated: 2021/11/29 13:16:33 by akaouan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fonction.h"

int	print_unsigned(long num)
{
	char	tab[30];
	int		i;
	long	n;
	int		len;

	if (num == 0)
	{
		print_char('0');
		return (1);
	}
	n = (unsigned int)num;
	i = count_nums(n);
	len = i;
	tab[i--] = '\0';
	while (i >= 0)
	{
		tab[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	print_str(tab);
	return (len);
}
