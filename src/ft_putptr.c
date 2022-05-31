/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 19:22:33 by cchapon           #+#    #+#             */
/*   Updated: 2022/05/31 20:24:10 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	ft_putptr(unsigned long long int n)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
		ft_putptr(n / 16);
	ft_putchar(base[n % 16]);
    return (ft_hexa_len(n));
}
