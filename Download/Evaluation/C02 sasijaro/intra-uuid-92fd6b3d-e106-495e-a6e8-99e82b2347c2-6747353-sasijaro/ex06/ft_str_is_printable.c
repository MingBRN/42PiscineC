/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasijaro <sasijaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 19:47:59 by sasijaro          #+#    #+#             */
/*   Updated: 2025/07/17 17:20:34 by sasijaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A'
					&& str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9')
				|| (str[i] == '-') || (str[i] == '_')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int main()
//{
//	char str[10] = "Gtur";
//	ft_str_is_printable(str);
//}