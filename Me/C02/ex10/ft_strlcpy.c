/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 10:38:17 by pboorana          #+#    #+#             */
/*   Updated: 2025/07/22 14:40:27 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;

	len = 0;
	while (*(src + len))
	{
		len++;
	}
	while (*src && size-- > 1)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (len);
}

//int 	main(void)
//{
//	char a[] = "Hello";
//	char *b = "1234asd";
//	//printf("%d", ft_strlcpy(a, b, 3));
//	ft_strlcpy(a, b, 5);
//	printf("%s", a);
//}