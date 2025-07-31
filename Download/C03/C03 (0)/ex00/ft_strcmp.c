/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 17:48:41 by pboorana          #+#    #+#             */
/*   Updated: 2025/07/15 17:54:00 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

//int	main(void)
//{
//	char	*s1;
//	char	*s2;

//	s1 = "Hello";
//	s2 = "Hello";
//	printf("%d", ft_strcmp(s1, s2));
//}