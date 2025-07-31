/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sburanas <siraphop1246@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 17:46:30 by sburanas          #+#    #+#             */
/*   Updated: 2025/07/15 19:11:42 by sburanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;
	char			*temp;

	temp = dest;
	i = 0;
	j = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		while (j < n - i)
		{
			dest[i] = '\0';
			j++;
		}
	}
	else
		dest[i] = 0;
	return (temp);
}

//#include <stdio.h>
//int	main(void)
//{
//	char	c[] = "Hello";
//	char	d[] = "World";
//	char	*a;

//	a = ft_strncpy(c, d, 10);
//	printf("%s\n",a);
//	printf("%lu ", sizeof(c));
//}