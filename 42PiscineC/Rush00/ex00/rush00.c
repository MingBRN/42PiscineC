/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 12:20:38 by jaruengb          #+#    #+#             */
/*   Updated: 2025/07/12 12:27:30 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	col(int x, char y, char z)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
		{
			write (1, &y, 1);
		}
		else
		{
			write (1, &z, 1);
		}
		i++;
	}
}

void	rush(int x, int y)
{
	int	j;

	j = 1;
	while (j <= y)
	{
		if (j == 1 || j == y)
		{
			col(x, 'o', '-');
		}
		else
		{
			col(x, '|', ' ');
		}
		write(1, "\n", 1);
		j++;
	}
}
