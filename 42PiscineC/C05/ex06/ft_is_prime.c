/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:09:46 by pboorana          #+#    #+#             */
/*   Updated: 2025/07/22 18:29:05 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 1;
	if (nb <= 1)
		return (0);
	else if (nb == 2)
		return (1);
	while (++i < nb)
	{
		if (nb % i == 0)
			return (0);
	}
	return (1);
}

//int	main(void)
//{
//	printf("%d", ft_is_prime(41));
//}