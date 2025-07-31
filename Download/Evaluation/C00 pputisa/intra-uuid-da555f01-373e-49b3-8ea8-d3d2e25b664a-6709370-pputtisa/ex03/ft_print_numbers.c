/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 19:11:58 by pputtisa          #+#    #+#             */
/*   Updated: 2025/07/16 15:10:35 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	num;

	num = 100;
	while (num <= 109)
	{
		write (1, &num, 1);
		num++;
	}
}
int main()
{
	ft_print_numbers();
}
