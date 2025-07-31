/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 11:43:57 by pboorana          #+#    #+#             */
/*   Updated: 2025/07/22 21:23:28 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (!(power <= 0))
		return (nb * ft_recursive_power(nb, power - 1));
	else if (power == 0)
		return (1);
	else
		return (0);
}

//int	main(void)
//{
//	printf("%d", ft_recursive_power(0, 7));
//}