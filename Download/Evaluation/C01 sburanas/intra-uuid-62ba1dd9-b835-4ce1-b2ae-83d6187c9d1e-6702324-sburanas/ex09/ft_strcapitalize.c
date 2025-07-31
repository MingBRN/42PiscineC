/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 22:50:26 by sburanas          #+#    #+#             */
/*   Updated: 2025/07/15 21:18:56 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 
#include <stdio.h>

int	checkletter(char *str)
{
	if (!((*(str - 1) >= 'A' && *(str - 1) <= 'Z')
			|| (*(str - 1) >= 'a' && *(str - 1) <= 'z')
			|| (*(str - 1) >= '0' && *(str - 1) <= '9')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	char	*src;

	src = str;
	while (*src)
	{
		if (*src >= 'A' && *src <= 'Z')
		{
			*src = *src + 32;
			if (*src >= 'a' && *src <= 'z')
			{
				if (checkletter(src))
				{
					*src = *src - 32;
				}
			}
		}
		src++;
	}
	return (str);
}

int	main(void)
{
	char	c[] = "hi how are you? forty-two; fifty+and+one";
	char	*a;

	a = ft_strcapitalize(c);
	printf("%s ", a);
}
