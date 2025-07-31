/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserovat <mserovat@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 19:47:54 by mserovat          #+#    #+#             */
/*   Updated: 2025/07/27 16:16:50 by mserovat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h> 

int	*ft_range(int min, int max)
{
	int	i;
	int	dif;
	int	*range;

	i = 0;
	if (min >= max)
		return (NULL);
	else
	{
		dif = max - min;
		range = malloc (dif * sizeof(int));
		if (range == NULL)
			return (NULL);
		while (i < dif)
		{
			range[i] = min + i;
			i++;
		}
	}
	return (range);
}

//int	main(void)
//{
//	int	*range;
//	int	i;
//	int	min;
//	int	max;

//	i = 0;
//	min = -5;
//	max = -1;
//	range = ft_range(min, max);

//	while (i < max - min)
//	{
//		printf("%d\n", range[i]);
//		i++;
//	}
//}
