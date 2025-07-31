/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddymov <ddymov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 20:36:07 by ddymov            #+#    #+#             */
/*   Updated: 2025/07/22 12:24:54 by ddymov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	x;

	x = 2;
	if (nb <= 2)
		return (2);
	while (x < nb)
	{
		if (nb % x == 0)
			return (ft_find_next_prime(nb + 1));
		x++;
	}
	return (nb);
}
/*
int	main(void)
{
	printf("%d\n", ft_find_next_prime(8));
}*/
