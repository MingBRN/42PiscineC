/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_libraly_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:10:04 by pboorana          #+#    #+#             */
/*   Updated: 2025/07/27 20:59:22 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *c)
{
	while (*c)
		write(1, c++, 1);
}

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (*str++)
	{
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	long	result;
	long	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || *str == '\f' || *str == '\n' || *str == '\r'
		|| *str == '\t' || *str == '\v')
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sign *= -1;
		}
		str++;
	}
	while (*str <= '9' && *str >= '0')
	{
		result = (result * 10) + *str++ - '0';
	}
	return (result * sign);
}

int	ft_check_valid_int(char *str)
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\t' || str[i] == '\v' || str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if ((str[i] <= '9' && str[i] >= '0') && temp == 0)
		{
			temp = 1;
			i++;
		}
		else if ((str[i] <= '9' && str[i] >= '0')
			&& ((str[i - 1] <= '9' && str[i - 1] >= '0') || str[i - 1] == '\0')
			&& ((str[i + 1] <= '9' && str[i + 1] >= '0') || str[i + 1] == '\0'))
			i++;
		else
			return (-1);
	}
	if (temp == 0)
		return (-1);
	return (0);
}
