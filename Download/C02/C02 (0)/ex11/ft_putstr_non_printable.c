/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 11:34:32 by pboorana          #+#    #+#             */
/*   Updated: 2025/07/16 13:15:27 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char str)
{
	if (str < 32 || str > 126)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

void	ft_hex(unsigned char c, char *res)
{
	char	*charset;

	charset = "0123456789abcdef";
	res[0] = charset[c / 16];
	res[1] = charset[c % 16];
}

void	ft_putstr_non_printable(char *str)
{
	char	hex[2];

	while (*str)
	{
		if (ft_str_is_printable(*str))
		{
			write(1, str, 1);
		}
		else
		{
			write(1, "\\", 1);
			ft_hex(*str, hex);
			write(1, hex, 2);
		}
		str++;
	}
}
