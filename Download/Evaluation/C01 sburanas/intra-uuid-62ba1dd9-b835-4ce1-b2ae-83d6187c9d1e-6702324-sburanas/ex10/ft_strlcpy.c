/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 23:30:25 by sburanas          #+#    #+#             */
/*   Updated: 2025/07/15 21:19:54 by pboorana         ###   ########.fr       */
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

#include <stdio.h>
int	main(void)
{
	char	c[] = "Hello";
	char	b[] = "HSBCHS";
	int i;

	i = ft_strlcpy(c, b, sizeof(c));
	printf("%d\n", i);
	printf("%s ",c);
}
