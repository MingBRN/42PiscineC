/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napatha <napatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 15:13:15 by napatha           #+#    #+#             */
/*   Updated: 2025/07/18 19:22:20 by napatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	sdd(char *str, int i)
{
	if (((str [i - 1] >= 'A' && str [i - 1] <= 'Z')
			|| (str [i - 1] >= 'a' && str [i - 1] <= 'z')
			|| (str [i - 1] >= '0' && str [i - 1] <= '9')))
	{
		str[i] += 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str [i] >= 'a' && str [i] <= 'z')
		{
			if (!((str [i - 1] >= 'A' && str [i - 1] <= 'Z')
					|| (str [i - 1] >= 'a' && str [i - 1] <= 'z')
					|| (str [i - 1] >= '0' && str [i - 1] <= '9')))
			{
				str [i] -= 32;
			}
		}
		else if (str [i] >= 'A' && str [i] <= 'Z')
		{
			sdd(str, i);
		}
		i++;
	}
	return (str);
}

//int main()
//{
//	char x[] = "guyeruv";
//	printf("%s",ft_strcapitalize(x));
//}