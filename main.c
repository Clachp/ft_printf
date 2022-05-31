/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchapon <cchapon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:21:05 by cchapon           #+#    #+#             */
/*   Updated: 2022/05/31 20:56:09 by cchapon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/printf.h"

int main (void)
{
	void	*voi;
	voi = malloc(sizeof(int));
	int a = -895246;
	int i;
	int j;
	char str[] = "Chat perche !";
	printf("Je teste printf avec l'int a = %i.\n", a);
	ft_printf("Je teste ft_printf avec l'int a = %i.\n", a);
	write(1, "hexadecimal\n", 13);
	printf("Je teste printf avec a en hexadecimal : %X.\n", a);
	ft_printf("Je teste ft_printf avec a en hexadecimal : %X.\n", a);
	write(1, "unsigned int\n", 14);
	printf("printf avec a en unsigned int : %u.\n", a);
	ft_printf("ft_printf avec a en unsigned int : %u.\n", a);
	write(1, "pointeur\n", 13);
	printf("Je teste printf avec pointeur void : %p.\n", voi);
	ft_printf("Je teste ft_printf avec pointeur void : %p.\n", voi);
	write(1, "string\n", 8);
	i = printf("Je teste printf avec la string : %s.\n", str);
	j = printf("Je teste ft_printf avec la string : %s.\n", str);
	printf("i avec printf : %d.\nj avec printf : %d.\n", i, j);
	ft_printf("i avec ft_printf : %d.\nj avec ft_printf : %d.\n", i, j);
	free(voi);
	return (0);
}
