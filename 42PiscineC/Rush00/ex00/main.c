/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 09:32:47 by pboorana          #+#    #+#             */
/*   Updated: 2025/07/12 16:39:15 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int	atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 0 && str[i] - '0' <= 9))
		{
			return (-1);
		}
		result = (result * 10) + str[i] - '0';
		i++;
	}
	return (result * sign);
}

int	main(int argc, char *argv[])
{
	int	a;
	int	b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		if (a > 0 && b > 0)
		{
			rush(a, b);
		}
		else
		{
			rush(5, 5);
		}
	}
	else
	{
		rush(5, 5);
	}
	return (0);
}
