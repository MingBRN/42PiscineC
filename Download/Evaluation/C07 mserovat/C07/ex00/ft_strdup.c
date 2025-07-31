/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserovat <mserovat@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 17:54:57 by mserovat          #+#    #+#             */
/*   Updated: 2025/07/26 18:49:53 by mserovat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h> 

char	*ft_strdup(char *src)
{
	int		i;
	int		k;
	char	*temp;

	i = 0;
	k = 0;
	while (src[i] != '\0')
		i++;
	temp = malloc ((i + 1) * sizeof(char));
	if (temp == NULL)
		return (0);
	while (src[k] != '\0')
	{
		temp[k] = src[k];
		k++;
	}
	temp[k] = '\0';
	return (temp);
}

//int	main(void)
//{
//	char	*str;
//	char	*res;
//	char	c;
//	int		i;

//	str = "abc";
//	res = ft_strdup(str);
//	i = 0;
//	while (res[i] != '\0')
//	{
//		c = res[i];
//		write(1, &c, 1);
//		i++;
//	}
//}
