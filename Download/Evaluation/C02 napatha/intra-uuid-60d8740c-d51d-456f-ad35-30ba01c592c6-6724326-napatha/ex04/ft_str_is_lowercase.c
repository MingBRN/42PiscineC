/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napatha <napatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:01:40 by napatha           #+#    #+#             */
/*   Updated: 2025/07/16 13:13:43 by napatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str [i] >= 'a' && str [i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

//int main()
//{
//	char str[] = "reihguei";
//	char str1[] = "1234";
//	char str2[] = "AXAH";
//	char str3[] = "";
//	char str4[] = "GGGa";
//	printf("%d\n",ft_str_is_lowercase(str));
//	printf("%d\n",ft_str_is_lowercase(str1)); 
//	printf("%d\n",ft_str_is_lowercase(str2));
//	printf("%d\n",ft_str_is_lowercase(str3));
//	printf("%d\n",ft_str_is_lowercase(str4));
//}