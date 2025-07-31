/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 21:29:31 by sburanas          #+#    #+#             */
/*   Updated: 2025/07/15 21:24:50 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str >= 32 && *str <= 127))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

int	main(void)
{
	char	c[] = "jdvjsfnvbƒ";
	int	i;

	i = ft_str_is_printable(c);
	printf("%d ", i);
}
