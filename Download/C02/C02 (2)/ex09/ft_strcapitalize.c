/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 09:00:38 by pboorana          #+#    #+#             */
/*   Updated: 2025/07/16 18:22:35 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*check_first_char(char *str)
{
	if ('a' <= str[0] && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	check_first_char(&str[i]);
	i++;
	while (str[i])
	{
		if ('A' <= str[i] && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		if (i == 0 || (!('A' <= str[i - 1] && str[i - 1] <= 'Z')
				&& !('a' <= str[i - 1] && str[i - 1] <= 'z')
				&& !('0' <= str[i - 1] && str[i - 1] <= '9')))
		{
			if ('a' <= str[i] && str[i] <= 'z')
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}

//int 	main(void)
//{
//	char a[] = "4i, how are you? 42words forty-two; fifty+and+one";
//	printf("%s", ft_strcapitalize(a));

//}