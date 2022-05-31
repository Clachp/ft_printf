/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:35:05 by cchapon           #+#    #+#             */
/*   Updated: 2022/05/31 20:38:57 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/printf.h"

size_t	ft_print_params(const char c, va_list params)
{
		if (c == '%')
			return (ft_putchar(c));	
		else if (c == 'c')
			return (ft_putchar(va_arg(params, int)));
		else if (c == 'i' || c == 'd' || c == 'u')
			return (ft_putnbr(va_arg(params, int), c));
		else if (c == 's')	
			return (ft_putstr(va_arg(params, char *)));
		else if (c == 'x' || c == 'X')
			return (ft_puthexa(va_arg(params, long int), c));
		else if (c == 'p')
		{
			write (1, "0x", 2);
			return (ft_putptr(va_arg(params, unsigned long long int) + 2));
		}		
		return (0);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		l;
	va_list	params;

	i = 0;
	l = 0;	
	va_start(params, format);
	while (format && format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			l += ft_print_params(format[i], params);
		}
		else
			l += ft_putchar(format[i]);
		i++;
	}
	va_end(params); 
	return (i);
}
