/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sburanas <siraphop1246@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 23:30:25 by sburanas          #+#    #+#             */
/*   Updated: 2025/07/14 22:56:58 by sburanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	while (*src && size > 1)
	{
		*dest = *src;
		src++;
		dest++;
		size--;
	}
	*dest = 0;
	return (i);
}

//#include <stdio.h>
//int	main(void)
//{
//	char	c[] = "Hello";
//	char	b[] = "HSBCHS";
//	int i;

//	i = ft_strlcpy(c, b, sizeof(c));
//	printf("%d\n", i);
//	printf("%s ",c);
//}
