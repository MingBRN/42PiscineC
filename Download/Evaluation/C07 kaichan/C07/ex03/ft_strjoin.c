/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 22:01:34 by kaichan           #+#    #+#             */
/*   Updated: 2025/07/31 15:09:08 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	full_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		if (i < size - 1)
			len = len + ft_strlen(sep);
		i++;
	}
	return (len);
}

char	*fill_string(int size, char **strs, char *sep, char *string)
{
	int	i;
	int	pos;

	i = 0;
	pos = 0;
	while (i < size)
	{
		ft_strcpy (string + pos, strs[i]);
		pos = pos + ft_strlen (strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(string + pos, sep);
			pos = pos + ft_strlen (sep);
		}
		i++;
	}
	string[pos] = '\0';
	return (string);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*string;

	if (size <= 0)
	{
		string = malloc(1);
		if (string)
			string[0] = '\0';
		return (string);
	}
	string = malloc (full_len(size, strs, sep) + 1);
	if (!string)
		return (NULL);
	return (fill_string (size, strs, sep, string));
}


int	main(void)
{
	char	str[] = "Hello";
	char	str1[] = "world";
	char	str2[] = "man!";
	char	*str012[] = {str, str1, str2};
	char	*result = ft_strjoin(3, str012, "++");

	printf("%s", result);
	return (0);
}