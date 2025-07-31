/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruengrdu <ruengrdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:42:33 by wcorrea-          #+#    #+#             */
/*   Updated: 2025/07/16 08:24:10 by ruengrdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = (*a / *b);
	mod = (*a % *b);
	*a = div;
	*b = mod;
}

/*
#include <stdio.h>

int	main(void)
{
	int a = 48;
	int b = 5;
	int	*div = &a;
	int	*mod = &b;

	printf("Before ft_div_mod: \n");
	printf("a value %d stored\n", a);
	printf("b value %d stored\n", b);
	ft_ultimate_div_mod(div, mod);
	printf("After ft_div_mod: \n");
	printf("a value %d stored\n", a);
	printf("b value %d stored\n", b);
}*/
