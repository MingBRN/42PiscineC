/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:52:53 by ddymov            #+#    #+#             */
/*   Updated: 2025/07/22 14:12:21 by pboorana         ###   ########.fr       */
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

//int	main(void)
//{
//	int	x;

//	x = ft_recursive_power(10, 0);
//	printf("%d\n", x);
//}
