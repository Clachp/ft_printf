/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:21:05 by cchapon           #+#    #+#             */
/*   Updated: 2022/06/01 14:34:21 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/ft_printf.h"
#include <limits.h>

int main (void)
{
	/*void	*voi;
	voi = malloc(sizeof(int));*/
	int ft_i = ft_printf(" %x %x %x %x %x %x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	int i = printf(" %x %x %lx %lx %lx %x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("ft_i = %d\ni = %d\n", ft_i, i); 
	int ft_j = ft_printf("%x %x %x %x %x %x %x %x\n", 895, INT_MAX, INT_MIN, LONG_MIN, ULONG_MAX, 0, -42, INT_MAX);
	int j = printf("%x %x %x %x %x %x %x %x\n",  885, INT_MAX, INT_MIN, LONG_MIN, ULONG_MAX, 0, -42, INT_MAX);
	printf("ft_j = %d\ni = %d\n", ft_j, j); 
	//free(voi);
	return (0);
}
