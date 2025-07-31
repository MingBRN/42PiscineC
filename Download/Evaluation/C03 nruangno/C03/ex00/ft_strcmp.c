/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nruangno <nruangno@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:41:34 by nruangno          #+#    #+#             */
/*   Updated: 2025/07/23 17:12:19 by nruangno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != 0 || s2[i] != 0)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
//
// int	main(void)
// {
// 	char	word1[] = "Bangkok";
// 	char	word2[] = "Nan";
// 	int		compare;

// 	compare = ft_strcmp(word1, word2);
// 	printf("Result is %d\n", compare);
// 	return (0);
// }
