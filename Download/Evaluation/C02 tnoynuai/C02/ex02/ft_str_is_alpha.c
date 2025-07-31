/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoynuai <tnoynuai@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:46:23 by tnoynuai          #+#    #+#             */
/*   Updated: 2025/07/17 16:08:19 by tnoynuai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int main ()
{
	int i;

	char *s1 = "Hello World";
	char *s2 = "C++";
	i = ft_str_is_alpha(s1);
	printf("%d\n", i);
	i = ft_str_is_alpha(s2);
	printf("%d\n", i);
	return (0);
}*/
