/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 21:39:40 by pboorana          #+#    #+#             */
/*   Updated: 2025/07/30 22:36:36 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

void	ft_putnbr(int nb)
{
	long	nbl;
	char	c[10];
	short	i;

	nbl = nb;
	i = 0;
	if (0 == nb)
	{
		write(1, "0", 1);
		return ;
	}
	if (nbl < 0)
	{
		nbl *= -1;
		write(1, "-", 1);
	}
	while (nbl)
	{
		c[i++] = (nbl % 10) + 48;
		nbl /= 10;
	}
	while (i > 0)
	{
		write(1, &c[--i], 1);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->str != 0)
	{
		ft_putstr(par->str);
		ft_putnbr(par->size);
		write(1, "\n", 1);
		ft_putstr(par->copy);
		par++;
	}
}

//int	main(void)
//{
//	t_stock_str tab[3];

//	tab[0].str = "1H";
//	tab[0].size = 1;
//	tab[0].copy = "1H";

//	tab[1].str = "2H";
//	tab[1].size = 2;
//	tab[1].copy = "2H";

//	tab[2].str = 0;  // Null-terminated array

//	ft_show_tab(tab);
//}