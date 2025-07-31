/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruengrdu <ruengrdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 00:30:29 by ruengrdu          #+#    #+#             */
/*   Updated: 2025/07/16 08:24:53 by ruengrdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;
	int	*p;
	int *q;

	x = 5;
	y = 9;
	p = &x;
	q = &y;
	printf("Before ft_swap: \n");
	printf("x value %d stored\n", x);
	printf("y value %d stored\n", y);
	ft_swap(p, q);
	printf("\n");
	printf("After ft_swap: \n");
	printf("x value %d stored\n", x);
	printf("y value %d stored\n", y);
}*/
