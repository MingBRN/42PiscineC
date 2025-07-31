/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoynuai <tnoynuai@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:52:36 by tnoynuai          #+#    #+#             */
/*   Updated: 2025/07/17 15:42:38 by tnoynuai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= ' ' && *str <= '~'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int main (void)
{
        printf("Test: %d\n", ft_str_is_printable("hello"));
        printf("Test: %d\n", ft_str_is_printable("HELLO"));
	printf("Test: %d\n", ft_str_is_printable(" "));
	printf("Test: %d\n", ft_str_is_printable("\n"));
        return (0);
}*/
