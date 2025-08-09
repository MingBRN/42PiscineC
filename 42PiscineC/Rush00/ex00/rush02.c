/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 12:03:31 by pboorana          #+#    #+#             */
/*   Updated: 2025/07/12 15:22:45 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_line(int lenght, int type)
{
	int	i;

	i = 0;
	while (i < lenght)
	{
		if ((i == 0 && type == 1) || (i == (lenght - 1) && type == 1))
		{
			ft_putchar('A');
		}
		else if ((i == (lenght - 1) && type == 2) || (i == 0 && type == 2))
		{
			ft_putchar('C');
		}
		else if (i == 0 || i == (lenght - 1) || type == 1 || type == 2)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	while (i < y)
	{
		if (i == 0)
		{
			ft_line(x, 1);
		}
		else if (i == (y - 1))
		{
			ft_line(x, 2);
		}
		else
		{
			ft_line(x, 0);
		}
		i++;
	}
}
