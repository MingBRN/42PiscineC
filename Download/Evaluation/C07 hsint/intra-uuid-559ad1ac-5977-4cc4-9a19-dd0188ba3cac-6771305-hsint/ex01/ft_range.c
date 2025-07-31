/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsint <hsint@student.42bangkok.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 12:20:24 by hsint             #+#    #+#             */
/*   Updated: 2025/07/29 12:45:46 by hsint            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*des;

	i = 0;
	des = (int *) malloc (sizeof(int) * (max - min) + 1);
	if (des == 0 || min >= max)
		return (0);
	while (min < max)
	{
		des[i] = min++;
		i++;
	}
	return (des);
}
/*#include <stdio.h>

int main(void)
{	
	int *des;
	int m = 3;
	int x = 9;
	des = ft_range(m,x);
	
	int i = 0;
	while(des[i] != '\0')
	{
		printf("%d", des[i]);
		i++;
	}
	return (0);
}*/
