/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htoe <htoe@student.42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 01:55:06 by htoe              #+#    #+#             */
/*   Updated: 2025/07/21 10:09:35 by htoe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*s1 = "Hello World";
	char	*s2 = "Hello World";
	char	*s3 = "Hell0 World";
	char	*s4 = "Hellz";

	printf("Equal: %d\n", ft_strcmp(s1, s2));
	printf("Less than: %d\n", ft_strcmp(s1, s3));
	printf("Greater than: %d\n", ft_strcmp(s1, s4));
}
*/
