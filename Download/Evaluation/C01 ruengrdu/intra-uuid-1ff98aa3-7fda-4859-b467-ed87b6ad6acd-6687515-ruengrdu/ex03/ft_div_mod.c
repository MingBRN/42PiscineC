/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruengrdu <ruengrdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:16:17 by ruengrdu          #+#    #+#             */
/*   Updated: 2025/07/16 08:18:44 by ruengrdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>

int	main(void)
{
	int a = 48;
	int b = 5;
	int	v1 = 0;
	int	v2 = 0;
	int	*div = &v1;
	int	*mod = &v2;

	ft_div_mod(a, b, div, mod);
	printf("After ft_div_mod: \n");
	printf("Pointer 'div' value %d stored\n", *div);
	printf("Pointer 'mod' value %d stored\n", *mod);
}*/
