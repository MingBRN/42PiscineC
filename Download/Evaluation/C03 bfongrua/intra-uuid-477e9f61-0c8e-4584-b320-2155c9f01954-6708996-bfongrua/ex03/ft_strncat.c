/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfongrua <bfongrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:54:20 by bfongrua          #+#    #+#             */
/*   Updated: 2025/07/19 15:11:28 by bfongrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[i] != '\0' && i < n)
	{
		dest[x + i] = src[i];
		i++;
	}
	dest[x + i] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <unistd.h>

// int	main(void)
// {
// 	char str1[20] = "Helloodddoo";
// 	char str2[] = "Worldddd";
// 	ft_strncat(str1, str2, 1), printf("dest:%s\n", str1);
// }