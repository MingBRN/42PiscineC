/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoynuai <tnoynuai@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:19:38 by tnoynuai          #+#    #+#             */
/*   Updated: 2025/07/17 16:15:18 by tnoynuai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
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
