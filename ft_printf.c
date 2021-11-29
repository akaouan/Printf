/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaouan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:56:37 by akaouan           #+#    #+#             */
/*   Updated: 2021/11/29 13:00:54 by akaouan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_args(va_list p, char s)
{
	int	len;

	len = 0;
	if (s == 'd' || s == 'i')
		len = print_int(va_arg(p, int));
	else if (s == 's')
		len = print_str(va_arg(p, char *));
	else if (s == 'x')
		len = print_hexa(va_arg(p, unsigned int));
	else if (s == 'X')
		len = print_hex(va_arg(p, unsigned int));
	else if (s == 'c')
		len = print_char(va_arg(p, int));
	else if (s == 'u')
		len = print_unsigned(va_arg(p, unsigned int));
	else if (s == 'p')
		len = print_adress(va_arg(p, void *));
	else if (s == '%')
		len = print_char('%');
	return (len);
}

int	ft_printf(const char *s, ...)
{
	va_list	p;
	int		i;
	int		len;
	int		sign;

	i = 0;
	sign = 1;
	len = 0;
	va_start(p, s);
	while (s[i])
	{
		sign = 1;
		if (s[i] == '%')
		{
			len += print_args(p, s[i + 1]);
			i++;
			sign = 0;
		}
		if (sign == 1)
			len += print_char(s[i]);
		i++;
	}
	va_end(p);
	return (len);
}
