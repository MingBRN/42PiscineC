/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:46:19 by pboorana          #+#    #+#             */
/*   Updated: 2025/07/23 14:34:44 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;

	i = 0;
	while (*dest)
	{
		dest++;
		i++;
	}
	while (nb-- != 0)
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

//	src = "aaa";
//	ft_strncat(dest, src, 5);
//	printf("%s", dest);
//}