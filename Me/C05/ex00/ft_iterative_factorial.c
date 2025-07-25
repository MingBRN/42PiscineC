/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 10:12:49 by pboorana          #+#    #+#             */
/*   Updated: 2025/07/22 21:20:26 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (i < nb)
	{
		result *= ++i;
	}
	return (result);
}

// int main(void)
//{
//	printf("%d", ft_iterative_factorial(9));
//}