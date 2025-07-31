/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 10:49:20 by pboorana          #+#    #+#             */
/*   Updated: 2025/07/15 17:55:24 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (dest);
}

//int	main(void)
//{
//	char	dest[] = "Hello ";
//	char	*src;

//	src = "aaaaaaaa";
//	ft_strcat(dest, src);
//	printf("%s", dest);
//}