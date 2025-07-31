/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsint <hsint@student.42bangkok.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 12:58:02 by hsint             #+#    #+#             */
/*   Updated: 2025/07/29 13:31:59 by hsint            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min == max)
		return (0);
	*range = (int *) malloc (sizeof(int) * (max - min + 1));
	if (*range == 0 || min >= max)
		return (0);
	while (i < max - min)
	{
		(*range)[i] = min + i;
		i++;
	}
	(*range)[i] = '\0';
	return (i);
}
/*#include <stdio.h>

int main(void)
{	
	int **r;
	
	r = malloc(sizeof(int **));

	int m = 3;
	int x = 9;
	printf("%d", ft_ultimate_range(r,m,x));
	
	return (0);
}*/
