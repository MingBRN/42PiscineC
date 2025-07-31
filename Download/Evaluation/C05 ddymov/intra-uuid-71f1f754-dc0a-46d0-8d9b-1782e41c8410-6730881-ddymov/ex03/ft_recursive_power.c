/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddymov <ddymov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:52:53 by ddymov            #+#    #+#             */
/*   Updated: 2025/07/22 12:24:45 by ddymov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		return (ft_recursive_power(nb, power - 1) * nb);
	}
}
/*
int	main(void)
{
	int	x;

	x = ft_recursive_power(10, 0);
	printf("%d\n", x);
}
*/