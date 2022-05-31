/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:47:42 by cchapon           #+#    #+#             */
/*   Updated: 2022/05/31 19:42:05 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	ft_putstr(char *s)
{
	while (s && *s)
		write (1, &*s++, 1);
	return (ft_strlen(s));
}
/*
int	main(void)
{
	char s[] = "string";
	ft_putstr_fd(s, 1);
}*/
