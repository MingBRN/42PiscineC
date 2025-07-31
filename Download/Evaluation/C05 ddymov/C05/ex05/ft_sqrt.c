/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 17:14:27 by ddymov            #+#    #+#             */
/*   Updated: 2025/07/22 14:12:10 by pboorana         ###   ########.fr       */
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

//int	main(void)
//{
//	int	x;

//	x = ft_sqrt(81);
//	printf("%d\n", x);
//}
