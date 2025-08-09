/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:50:09 by pboorana          #+#    #+#             */
/*   Updated: 2025/07/23 13:50:35 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	compare(char *str, char *to_find)
{
	int	temp;
	int	i;

	temp = 0;
	i = 0;
	while (to_find[i] != '\0')
	{
		if (str[i] != to_find[i])
		{
			temp = 1;
		}
		i++;
	}
	return (temp);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str)
	{
		if (*str == *to_find)
		{
			if (compare(str, to_find) == 0)
			{
				return (str);
			}
		}
		str++;
	}
	return (0);
}

//int	main(void)
//{
//	char	dest[] = "Hello the eart kdfj e u ";
//	char	*needle;

//	needle = "th0";
//	printf("%s", ft_strstr(dest, needle));
//}