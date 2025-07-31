/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:29:33 by mlin-the          #+#    #+#             */
/*   Updated: 2025/07/12 09:24:46 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	write_result(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	left_number;
	int	right_number;

	left_number = 0;
	while (left_number < 99)
	{
		right_number = left_number + 1;
		while (right_number <= 99)
		{
			write_result('0' + left_number / 10);
			write_result('0' + left_number % 10);
			write_result(' ');
			write_result('0' + right_number / 10);
			write_result('0' + right_number % 10);
			if (!(left_number == 98 && right_number == 99))
			{
				write(1, ",", 2);
			}
			right_number++;
		}
		left_number++;
	}
}

int	main(void)
{
	ft_print_comb2();
}
