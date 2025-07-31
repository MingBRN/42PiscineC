/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napatha <napatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:35:39 by napatha           #+#    #+#             */
/*   Updated: 2025/07/16 20:20:33 by napatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= '0' && str[i] <= '9')
				|| (str[i] == '-') || (str[i] == '_')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

//int main()
//{
//      char str[] = "ABDELKFSCO)";
//      char str1[] = "\n\t\v\f";
//      char str2[] = "AXAH";
//      char str3[] = "";
//      char str4[] = "-_134556efSghij67";

//      printf("%d\n",ft_str_is_printable(str));
//      printf("%d\n",ft_str_is_printable(str1)); 
//      printf("%d\n",ft_str_is_printable(str2));
//      printf("%d\n",ft_str_is_printable(str3));
//      printf("%d\n",ft_str_is_printable(str4));
//}