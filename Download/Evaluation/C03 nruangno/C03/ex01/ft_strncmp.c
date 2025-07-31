/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nruangno <nruangno@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:13:16 by nruangno          #+#    #+#             */
/*   Updated: 2025/07/27 15:40:50 by nruangno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != 0 || s2[i] != 0))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
// 
// int	main(void)
// {
// 	char			word1[] = "New Zealand";
// 	char			word2[] = "New world";
// 	unsigned int	n;
// 	int				compare;

// 	n = 6;
// 	compare = ft_strncmp(word1, word2, n);
// 	printf("Compare result is %d\n", compare);
// 	return (0);
// }
