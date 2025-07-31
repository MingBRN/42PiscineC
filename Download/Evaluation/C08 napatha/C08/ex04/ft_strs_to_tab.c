/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 09:04:46 by napatha           #+#    #+#             */
/*   Updated: 2025/07/31 14:55:57 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*copy;

	len = ft_strlen(src);
	copy = (char *)malloc(len + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*array;

	array = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!array)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		array[i].size = ft_strlen(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		if (!array[i].copy)
		{
			printf("djfkdjk");
			while (--i >= 0)
				free(array[i].copy);
			free(array);
			return (NULL);
			
		}
		i++;
	}
	array[i].str = NULL;
	return (array);
}

int main(void)
{
	char *inputs[] = {"", "", "", ""};
	int count = sizeof(inputs) / sizeof(inputs[0]);

	t_stock_str *result = ft_strs_to_tab(count, inputs);

	if (!result)
	{
		printf("Memory allocation failed.\n");
		return 1;
	}

	for (int i = 0; i < count; i++)
	{
		printf("Entry %d:\n", i);
		printf("  Original: %s\n", result[i].str);
		printf("  Length: %d\n", result[i].size);
		printf("  Copy: %s\n", result[i].copy);
	}

	// Free memory
	for (int i = 0; i < count; i++)
	{
		free(result[i].copy);
	}
	free(result);
	return 0;
}