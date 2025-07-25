/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaruengb <jaruengb@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:18:20 by jaruengb          #+#    #+#             */
/*   Updated: 2025/07/12 15:19:57 by jaruengb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_line(int lenght, char a, char b, char c)
{
	int	i;

	i = 0;
	while (i < lenght)
	{
		if (i == 0)
		{
			ft_putchar(a);
		}
		else if (i == (lenght - 1))
		{
			ft_putchar(c);
		}
		else
		{
			ft_putchar(b);
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
			ft_line(x, 'A', 'B', 'C');
		}
		else if (i == (y - 1))
		{
			ft_line(x, 'C', 'B', 'A');
		}
		else
		{
			ft_line(x, 'B', ' ', 'B');
		}
		i++;
	}
}
