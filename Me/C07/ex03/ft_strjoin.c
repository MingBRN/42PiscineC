/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:09:15 by pboorana          #+#    #+#             */
/*   Updated: 2025/07/29 22:01:48 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest);
}

char	*malloc_to_free(void)
{
	char	*str;

	str = malloc(sizeof(*str));
	*str = '\0';
	return (str);
}

long long	ft_strlen(char *str)
{
	long long	length;

	length = 0;
	while (*str++)
		length++;
	return (length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr;
	char	*tmp;
	int		i;
	int		total;

	i = 0;
	total = 0;
	if (!size)
		return (malloc_to_free());
	while (i < size)
		total += ft_strlen(strs[i++]);
	ptr = malloc(sizeof(char) * (total + (ft_strlen(sep) * (size - 1)) + 1));
	tmp = ft_strcat(ptr, strs[0]);
	i = 1;
	while (i < size)
	{
		tmp = ft_strcat(tmp, sep);
		tmp = ft_strcat(tmp, strs[i++]);
	}
	*tmp = '\0';
	return (ptr);
}

//int	main(void)
//{
//	char	str[] = "Hello";
//	char	str1[] = "world";
//	char	str2[] = "man!";
//	char	*str012[] = {str, str1, str2};
//	char	*result = ft_strjoin(3, str012, "++");

//	printf("%s", result);
//	return (0);
//}