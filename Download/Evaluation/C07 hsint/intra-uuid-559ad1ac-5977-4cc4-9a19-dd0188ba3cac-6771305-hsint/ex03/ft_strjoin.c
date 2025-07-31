/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsint <hsint@student.42bangkok.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 22:23:05 by hsint             #+#    #+#             */
/*   Updated: 2025/07/30 22:26:39 by hsint            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		counter++;
	}
	return (counter);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	get_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i < size - 1)
			len += ft_strlen(sep);
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
		pos += ft_strlen (strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(string + pos, sep);
			pos += ft_strlen (sep);
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
	string = malloc (get_total_len(size, strs, sep) + 1);
	if (!string)
		return (NULL);
	return (fill_string (size, strs, sep, string));
}
/*
int	main()
{
	 char *my_strings[] = {"hello", "wo,rld", "from", "C"};
	 int num = sizeof(my_strings) / sizeof(my_strings[0]) ;
	 char *sep = ", ";
	 char *joined_string = ft_strjoin(num, my_strings, sep);
	 if (joined_string != NULL)
	 {
		 printf("Joined string: %s\n", joined_string);
		 free(joined_string);
	 }
	return (0);
}*/
