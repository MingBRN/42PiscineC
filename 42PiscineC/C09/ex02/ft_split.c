/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 13:48:22 by pboorana          #+#    #+#             */
/*   Updated: 2025/07/31 18:11:34 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_is_in_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

long long	ft_word_cnt(char *str, char *charset)
{
	long long	i;

	i = 0;
	while (*str)
	{
		if (!(ft_is_in_charset(*str, charset)))
		{
			i++;
			while (*str && !(ft_is_in_charset(*str, charset)))
				str++;
		}
		str++;
	}
	return (i);
}

void	ft_strcpy(char *dest, char *from, char *until)
{
	while (from < until)
		*dest++ = *from++;
	*dest = '\0';
}

char	**ft_split(char *str, char *charset)
{
	char		**split;
	long long	index;
	char		*from;

	split = malloc(sizeof(char *) * ft_word_cnt(str, charset) + 1);
	index = 0;
	while (*str)
	{
		if (!(ft_is_in_charset(*str, charset)))
		{
			from = str;
			while (*str && !(ft_is_in_charset(*str, charset)))
				str++;
			split[index] = malloc(str - from + 1);
			ft_strcpy(split[index++], from, str);
		}
		str++;
	}
	split[index] = NULL;
	return (split);
}

//int	main(void)
//{
//	char *str = "";
//	char *charset = "d";
//	int	i;

//	i = 0;
//	char **result = ft_split(str, charset);
//	while (result[i] != NULL)
//	{
//		printf("%s", result[i]);
//		free(result[i]);
//		i++;
//	}
//	free(result);
//	return (0);
//}