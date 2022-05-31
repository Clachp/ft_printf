/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:59:54 by cchapon           #+#    #+#             */
/*   Updated: 2022/05/31 20:22:52 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
size_t	ft_putchar(char c);
size_t	ft_strlen(const char *str);
size_t	ft_putnbr(long int n, char flag);
size_t	ft_putstr(char *s);
size_t	ft_puthexa(long int n, char flag);
size_t	ft_putptr(unsigned long long int n);
size_t  ft_hexa_len(unsigned long long int n);

#endif
