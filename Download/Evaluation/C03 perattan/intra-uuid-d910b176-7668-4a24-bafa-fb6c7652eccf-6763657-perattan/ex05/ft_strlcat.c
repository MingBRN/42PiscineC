/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perattan <perattan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 18:31:03 by perattan          #+#    #+#             */
/*   Updated: 2025/07/17 18:31:03 by perattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	tofill;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	tofill = size - dest_len - 1;
	if (dest_len >= size)
		return (size + src_len);
	while (src[i] && tofill--)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
// int	main(void)
// {
// 	char str1[] = "hellh";
// 	char str2[] = "hi";
// 	unsigned int test = ft_strlcat(str2, str1, 6);
// 	printf("%d", test);
// }