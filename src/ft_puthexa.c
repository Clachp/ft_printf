/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:41:21 by cchapon           #+#    #+#             */
/*   Updated: 2022/05/31 20:23:13 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	ft_puthexa(long int n, char x)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (x == 'x')
		base = "0123456789abcdef";
	if (n >= 16)
		ft_puthexa((n / 16), x);
	ft_putchar(base[n % 16]);
	return (ft_hexa_len(n));
	
}
/*
int main (void)
{
	int i;
	int h = 897;
	
	printf("%X\n", h);
	i = ft_puthexa(h, 'X');
	printf ("%d\n", i);
	return (0);
}*/