/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:53:45 by pboorana          #+#    #+#             */
/*   Updated: 2025/07/22 21:24:17 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	while (i++ <= nb / 2)
	{
		if ((i * i) == nb)
			return (i);
	}
	return (0);
}

//int	main(void)
//{
//	printf("%d", ft_sqrt(9));
//}
