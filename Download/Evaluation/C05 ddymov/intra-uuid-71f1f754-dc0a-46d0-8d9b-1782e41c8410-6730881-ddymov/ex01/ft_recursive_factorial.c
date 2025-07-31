/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddymov <ddymov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 11:37:42 by ddymov            #+#    #+#             */
/*   Updated: 2025/07/22 12:24:42 by ddymov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
	{
		return (ft_recursive_factorial(nb - 1) * nb);
	}
}
/*
int	main(void)
{
	int	x;

	x = ft_recursive_factorial(5);
	printf("%d\n", x);
	return (0);
}*/
