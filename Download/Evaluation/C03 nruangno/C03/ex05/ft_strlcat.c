/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 15:05:41 by nruangno          #+#    #+#             */
/*   Updated: 2025/07/27 17:09:45 by pboorana         ###   ########.fr       */
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

//int	main(void)
//{
//	char	dest[] = "s";
//	char	*src;

//	src = "HHHHHHHHH";
//	printf("%d\n", ft_strlcat(dest, src, 2));
//	printf("%s\n", dest);
//}
