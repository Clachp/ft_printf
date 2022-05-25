/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:35:05 by cchapon           #+#    #+#             */
/*   Updated: 2022/05/25 18:14:39 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//%c Prints a single character.
//%s Prints a string (as defined by the common C convention).
//%p The void * pointer argument has to be printed in hexadecimal format.
//%d Prints a decimal (base 10) number.
//%i Prints an integer in base 10.
//%u Prints an unsigned decimal (base 10) number.
//%x Prints a number in hexadecimal (base 16) lowercase format.
//%X Prints a number in hexadecimal (base 16) uppercase format.
//%% Prints a percent sign.

int	ft_printf(const char *, ...)
{
	const char *str;
	int	i;
	
	i = 0;
	va_start(str);
	while (va_arg)
	{
		i += ft_strlen(va_arg);
	}
	str = malloc(sizeof(char *) * (i + 1));
	if (!str)
		return (0);
	while (str && str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == d)
				ft_putnbr();
			else if (str[i] == c)
				ft_putchar();
			else if (str[i] == s)
				ft_putstr(arg);
			else if (str[i] == x)
				ft_puthexa(arg);
			else if (str[i] == u)
				ft_put
	}
}
