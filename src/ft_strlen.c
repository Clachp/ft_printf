/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:10:43 by cchapon           #+#    #+#             */
/*   Updated: 2022/05/30 15:07:24 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	ft_strlen(const char *str)
{
	int	l;

	l = 0;
	if (str == NULL)
		return (0);
	while (str[l])
		l++;
	return (l);
}
/*
int	main (void)
{
	char str[] = "string";
	printf("%ld\n", strlen(str));
	printf("%ld\n", ft_strlen(str));
}*/
