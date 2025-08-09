/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 14:25:34 by pboorana          #+#    #+#             */
/*   Updated: 2025/07/23 14:35:06 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*dest)
	{
		dest++;
		i++;
	}
	while (*src)
	{
		*dest++ = *src++;
		i++;
	}
	*dest = '\0';
	return (dest - i);
}

//int	main(void)
//{
//	char	dest[] = "Hello ";
//	char	*src;

//	src = "aaaaaaaa";
//	ft_strcat(dest, src);
//	printf("%s", dest);
//}