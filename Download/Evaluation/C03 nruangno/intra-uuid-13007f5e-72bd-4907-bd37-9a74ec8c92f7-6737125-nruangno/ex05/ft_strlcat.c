/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nruangno <nruangno@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 15:05:41 by nruangno          #+#    #+#             */
/*   Updated: 2025/07/27 16:09:45 by nruangno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	result;

	i = 0;
	j = ft_strlen(dest);
	result = ft_strlen(src);
	if (size == 0)
		return (result);
	if (size <= j)
		return (result += size);
	else
		result += j;
	while (src[i] && j + 1 < size)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (result);
}
// 
// int	main(void)
// {
// 	char	w1[10] = "Check";
// 	char	w2[10] = "error";
// 	int		size;

// 	size = 0;
// 	printf("Word before : %s\n", w1);
// 	printf("Result : %d\n", ft_strlcat(w1, w2, size));
// 	printf("Word after : %s\n", w1);
// }
