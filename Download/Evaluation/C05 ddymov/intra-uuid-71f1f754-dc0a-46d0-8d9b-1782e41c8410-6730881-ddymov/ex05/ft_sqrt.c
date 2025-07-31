/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddymov <ddymov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 17:14:27 by ddymov            #+#    #+#             */
/*   Updated: 2025/07/22 12:24:49 by ddymov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)

{
	int	result;

	result = 0;
	if (nb == 1)
		return (1);
	while (result < nb)
	{
		if (result * result == nb)
			return (result);
		else
			result++;
	}
	return (0);
}
/*
int	main(void)
{
	int	x;

	x = ft_sqrt(16);
	printf("%d\n", x);
}
*/