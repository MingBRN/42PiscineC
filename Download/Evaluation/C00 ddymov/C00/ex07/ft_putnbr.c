/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 11:14:51 by ddymov            #+#    #+#             */
/*   Updated: 2025/07/19 11:42:44 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		x;
	char	num[10];

	if (nb == 0)
		ft_putchar('0');
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		ft_putchar('-');
		nb = -nb;
	}
	x = 0;
	while (nb > 0)
	{
		num[x] = nb % 10 + '0';
		nb = nb / 10;
		x++;
	}
	while (x >= 0)
		ft_putchar(num[--x]);
}

int	main(void)
{
	ft_putnbr(0);
}

