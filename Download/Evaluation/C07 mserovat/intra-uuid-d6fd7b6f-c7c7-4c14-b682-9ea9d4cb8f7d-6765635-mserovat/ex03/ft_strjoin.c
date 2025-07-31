/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserovat <mserovat@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 15:16:33 by mserovat          #+#    #+#             */
/*   Updated: 2025/07/29 00:17:25 by mserovat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_destlen(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	int		lsep;
	char	*res;

	i = 0;
	len = 0;
	lsep = ft_strlen(sep);
	if (size < 1)
	{
		res = malloc (1 * sizeof(char));
		res[0] = '\0';
	}
	if (size < 1)
		return (1);
	while (i < size)
	{
		if (strs[i] == NULL)
			break ;
		len = len + ft_strlen(strs[i]);
		i++;
	}
	if (size > 1)
		len = len + (size - 1) * lsep;
	return (len);
}

char	*ft_strcpy(char *dest, char *src, int len)
{
	int	i;

	i = 0;
	if (!src || !dest)
		return (0);
	while (src[i] != '\0')
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*res;

	i = 0;
	len = 0;
	res = malloc ((ft_destlen(size, strs, sep) + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	res[0] = '\0';
	while (i < size)
	{
		if (strs[i] == NULL)
			break ;
		ft_strcpy(res, strs[i], len);
		len = len + ft_strlen(strs[i]);
		i++;
		if (i != size)
			ft_strcpy(res, sep, len);
		len = len + ft_strlen(sep);
	}
	res[len] = '\0';
	return (res);
}

//int	main(void)
//{
//	char	*res;
//	char	*strs [] = {"This", "is", "very", "hard!"};
//	char	*sep = "_";
//	res = ft_strjoin(4, strs, sep);
//	printf("%s\n", res);
//	free(res);
//}
