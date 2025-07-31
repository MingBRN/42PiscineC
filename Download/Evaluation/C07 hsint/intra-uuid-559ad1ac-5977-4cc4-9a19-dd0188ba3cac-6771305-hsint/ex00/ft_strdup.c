/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsint <hsint@student.42bangkok.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 11:19:16 by hsint             #+#    #+#             */
/*   Updated: 2025/07/31 10:28:33 by hsint            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*des;

	len = 0;
	while (src[len])
		len++;
	des = (char *) malloc (sizeof(char) * (len + 1));
	if (des == NULL)
		return (0);
	i = 0;
	while (src[i])
	{
		des[i] = src[i];
		i++;
	}
	des[i] = '\0';
	return (des);
}
/*#include <stdio.h>
int main()
{
	char a[]="Hello";
	printf ("%s", ft_strdup(a));
	return(0);
}*/
