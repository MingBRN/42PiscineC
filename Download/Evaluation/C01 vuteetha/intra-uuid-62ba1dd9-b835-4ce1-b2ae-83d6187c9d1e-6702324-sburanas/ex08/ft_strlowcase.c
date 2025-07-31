/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sburanas <siraphop1246@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 22:39:59 by sburanas          #+#    #+#             */
/*   Updated: 2025/07/12 22:49:33 by sburanas         ###   ########.fr       */
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

//int	main(void)
//{
//	char	c[] = "HEL LO";
//	char	*a;

//	a = ft_strlowcase(c);
//	printf("%s ", a);
//}
