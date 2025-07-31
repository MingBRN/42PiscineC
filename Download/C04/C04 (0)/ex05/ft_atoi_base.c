/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 14:48:33 by pboorana          #+#    #+#             */
/*   Updated: 2025/07/18 19:25:01 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	sanitized_base(char *base)
{
	char	*buffer;
	int		n;

	n = 0;
	while (*base)
	{
		if (*base == '+' || *base == '-' || *base == ' ')
		{
			return (0);
		}
		buffer = base;
		while (*buffer++)
		{
			if (*buffer == *base)
			{
				return (0);
			}
		}
		n++;
		base++;
	}
	return (n);
}

int	has_char(char str, char *base)
{
	while (*base)
	{
		if (str == *base)
		{
			return (1);
		}
		base++;
	}
	return (0);
}

int	find_index(char str, char *base)
{
	int	index;

	index = 0;
	while (*base)
	{
		if (str == *base)
		{
			return (index);
		}
		index++;
		base++;
	}
	return (-1);
}

int	base_to_dec(char *str, char *base, int number, int n)
{
	while (has_char(*str, base))
	{
		number = (n * number) + find_index(*str, base);
		str++;
	}
	return (number);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	number;
	int	n;

	sign = 1;
	number = 0;
	n = sanitized_base(base);
	if (n < 2)
	{
		return (0);
	}
	while (*str)
	{
		if (*str == '-')
		{
			sign *= -1;
		}
		else if (has_char(*str, base))
		{
			number = base_to_dec(str, base, number, n);
			break ;
		}
		str++;
	}
	return (sign * number);
}

//int	main(void)
//{
//	printf("Here: %d", ft_atoi_base("-2147483648", "0123456789"));
//}
