/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nruangno <nruangno@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:04:05 by nruangno          #+#    #+#             */
/*   Updated: 2025/07/23 18:52:35 by nruangno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
// 
// int	main(void)
// {
// 	char	w1[1543] = "fear";
// 	char	w2[] = "less";
// 	char	result;

// 	ft_strcat(w1, w2);
// 	printf("Joint string : %s\n", w1);
// }
