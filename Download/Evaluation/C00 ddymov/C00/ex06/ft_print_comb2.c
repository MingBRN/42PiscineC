/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 20:38:02 by ddymov            #+#    #+#             */
/*   Updated: 2025/07/19 11:42:13 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	char	num[5];

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			num[0] = a / 10 + '0';
			num[1] = a % 10 + '0';
			num[2] = ' ';
			num[3] = b / 10 + '0';
			num[4] = b % 10 + '0';
			write(1, num, 5);
			if (! (a == 98 && b == 99))
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
}
