/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:08:33 by cchapon           #+#    #+#             */
/*   Updated: 2022/05/31 20:19:41 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	ft_nbrlen(long int n)
{
	size_t l;

	l = 0;
	if (n == 0)
		return (1); 
	if (n < 0)
		l = 1; 
	while (n)
	{
		n /= 10;
		l++;
	}
	return (l);
}

size_t	ft_putnbr(long int n, char flag)
{
	char	c;

	if (flag == 'u')
		n = (unsigned int)n;
	if (n < 0)
	{
		write (1, "-", 1);
		n = -n;
	}
	if (n >= 0 && n <= 9)
	{
		c = '0' + n;
		write (1, &c, 1);
	}
	else
	{
		ft_putnbr((n / 10), flag);
		ft_putnbr((n % 10), flag);
	}
	return (ft_nbrlen(n));
}
