/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sburanas <siraphop1246@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 21:29:31 by sburanas          #+#    #+#             */
/*   Updated: 2025/07/12 21:50:22 by sburanas         ###   ########.fr       */
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

//int	main(void)
//{
//	char	c[] = "jdvjsfnvbƒ";
//	int	i;

//	i = ft_str_is_printable(c);
//	printf("%d ", i);
//}
