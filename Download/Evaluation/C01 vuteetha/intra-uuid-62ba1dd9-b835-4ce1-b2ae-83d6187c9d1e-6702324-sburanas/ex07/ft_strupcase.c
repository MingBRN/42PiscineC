/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sburanas <siraphop1246@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 21:51:55 by sburanas          #+#    #+#             */
/*   Updated: 2025/07/14 22:16:25 by sburanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> //done

char	*ft_strupcase(char *str)
{
	char	*src;

	src = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}
	return (src);
}

//int	main(void)
//{
//	char	c[] = "hello world";
//	char	*b;

//	b = ft_upcase(c);
//	printf("%s ",b);
//}
