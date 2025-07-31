/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 16:43:43 by pboorana          #+#    #+#             */
/*   Updated: 2025/07/30 22:38:59 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (*c++)
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;

	i = 0;
	new = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (new == NULL)
		return (NULL);
	while (*src)
		new[i++] = *src++;
	new[i] = '\0';
	return (new);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*arr;

	i = 0;
	arr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (arr == NULL)
		return (0);
	while (i < ac)
	{
		arr[i].str = av[i];
		arr[i].size = ft_strlen(av[i]);
		arr[i].copy = ft_strdup(av[i]);
		i++;
	}
	arr[i].str = 0;
	return (arr);
}

//int main(void)
//{
//	char *inputs[] = {"Hello", "World", "42", "Piscine"};
//	int count = sizeof(inputs) / sizeof(inputs[0]);

//	t_stock_str *result = ft_strs_to_tab(count, inputs);

//	if (!result)
//	{
//		printf("Memory allocation failed.\n");
//		return 1;
//	}

//	for (int i = 0; i < count; i++)
//	{
//		printf("Entry %d:\n", i);
//		printf("  Original: %s\n", result[i].str);
//		printf("  Length: %d\n", result[i].size);
//		printf("  Copy: %s\n", result[i].copy);
//	}

//	// Free memory
//	for (int i = 0; i < count; i++)
//	{
//		free(result[i].copy);
//	}
//	free(result);
//	return 0;
//}