/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfongrua <bfongrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:34:23 by bfongrua          #+#    #+#             */
/*   Updated: 2025/07/17 19:45:57 by bfongrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>

// int	main(void)
// {
// 	char s1[] = "ASD";
// 	char s2[] = "ASDD";
// 	printf("%d\n", ft_strcmp(s1, s2));
// 	printf("%d\n", ft_strcmp(s1, s2));
// 	printf("%d\n", ft_strcmp(s2, s1));

// 	printf("%d\n", strcmp(s1, s2));
// 	printf("%d\n", strcmp(s1, s2));
// 	printf("%d\n", strcmp(s2, s1));
// }