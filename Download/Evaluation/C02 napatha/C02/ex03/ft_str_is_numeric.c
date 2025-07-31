/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napatha <napatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:29:45 by napatha           #+#    #+#             */
/*   Updated: 2025/07/16 12:58:18 by napatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str [i] >= '0' && str [i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
//int main()
//{
//char str[] = "123e";
//printf("%d",ft_str_is_numeric(str));
//}