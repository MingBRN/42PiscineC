/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:46:19 by pboorana          #+#    #+#             */
/*   Updated: 2025/07/15 17:56:02 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	while (*dest)
	{
		dest++;
	}
	while (nb-- != 0)
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

//	src = "aaa";
//	ft_strncat(dest, src, 5);
//	printf("%s", dest);
//}