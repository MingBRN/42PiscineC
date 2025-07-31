/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 22:39:59 by sburanas          #+#    #+#             */
/*   Updated: 2025/07/15 21:21:21 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char	*str)
{
	char	*src;

	src = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + 32;
		}
		str++;
	}
	return (src);
}

int	main(void)
{
	char	c[] = "HEL DFDFD@#$LO";
	char	*a;

	a = ft_strlowcase(c);
	printf("%s ", a);
}
