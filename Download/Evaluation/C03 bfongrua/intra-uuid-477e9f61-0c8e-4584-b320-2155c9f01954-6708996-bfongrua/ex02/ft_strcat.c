/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfongrua <bfongrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 22:12:56 by bfongrua          #+#    #+#             */
/*   Updated: 2025/07/17 20:19:56 by bfongrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (dest[x])
	{
		x++;
	}
	while (src[i])
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
// 	char str1[50] = "Hellooddddddddddoo";
// 	char str2[50] = "Worldddd";

// 	printf("dest:%s\n", ft_strcat(str1, str2));
// }