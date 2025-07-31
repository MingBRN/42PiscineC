/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htoe <htoe@student.42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:19:09 by htoe              #+#    #+#             */
/*   Updated: 2025/07/23 11:33:48 by htoe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (!to_find[0])
		return (str);
	while (str[i])
	{
		j = 0;
		while (to_find[j] == str[i + j] && str[i + j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char *str = "Try xyz this part of the text";
	char *to_find = "xyz";

	printf("Returned: %p\n", ft_strstr(str, to_find));
	printf("Returned: %s\n", ft_strstr(str, to_find));
}
*/
