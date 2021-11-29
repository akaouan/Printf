/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaouan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:01:08 by akaouan           #+#    #+#             */
/*   Updated: 2021/11/29 13:05:54 by akaouan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FONCTION_H
# define FONCTION_H
# include<unistd.h>

int	count_hexat(long n);
int	print_adress(void *n);
int	print_char(char s);
int	print_int(int num);
int	print_hex(long n);
int	print_hexa(long n);
int	print_str(char *str);
int	print_unsigned(long num);
int	count_nums(long n);
int	ft_strlen(char *s);
#endif
