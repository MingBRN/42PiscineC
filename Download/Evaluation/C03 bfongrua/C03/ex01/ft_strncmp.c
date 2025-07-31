/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfongrua <bfongrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 21:11:53 by bfongrua          #+#    #+#             */
/*   Updated: 2025/07/15 12:42:14 by bfongrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while (*s1 && *s2 && x < n)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
		x++;
	}
	if (x == n)
		return (0);
	else
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>
// int	main(void)
// {
// 	char s1[] = "ASDASD";
// 	char s2[] = "ASDASDDASD ASD";
// 	char s3[] = "QWEQWE ASDASDSAD";
// 	printf("%d\n", ft_strncmp(s1, s2, 9));
// 	printf("%d\n", ft_strncmp(s1, s2, 6));
// 	printf("%d\n", ft_strncmp(s2, s1, 6));
// 	printf("%d\n\n", ft_strncmp(s3, s1, 6));

// 	printf("%d\n", strncmp(s1, s2, 9));
// 	printf("%d\n", strncmp(s1, s2, 6));
// 	printf("%d\n", strncmp(s2, s1, 6));
// 	printf("%d\n", strncmp(s3, s1, 6));
// }