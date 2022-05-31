/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_v1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:35:05 by cchapon           #+#    #+#             */
/*   Updated: 2022/05/31 19:09:42 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	params;
	int		i;

	va_start(params, format);
	i = 0;
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
				write(1, "%", 1);
			else if (format[i] == 'c')
				ft_putchar(va_arg(params, int));
			else if (format[i] == 'i' || format[i] == 'd' || format[i] == 'u')
				ft_putnbr(va_arg(params, int), format[i]);
			else if (format[i] == 's')
				ft_putstr(va_arg(params, char *));
			else if (format[i] == 'x' || format[i] == 'X')
				ft_puthexa(va_arg(params, long int), format[i]);
			else if (format[i] == 'p')
			{
				write (1, "0x", 2);
				ft_putptr(va_arg(params, unsigned long long int));
			}		
		}
		else
			ft_putchar(format[i]);
		i++;
	}
	return (i);
}

