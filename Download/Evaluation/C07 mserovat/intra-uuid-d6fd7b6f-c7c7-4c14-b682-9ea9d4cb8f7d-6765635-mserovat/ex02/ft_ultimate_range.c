/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserovat <mserovat@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 13:46:59 by mserovat          #+#    #+#             */
/*   Updated: 2025/07/27 16:16:54 by mserovat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}

//int	main(void)
//{
//	int	*range;
//	int	i;
//	int	min;
//	int	max;
//	int	size;

//	i = 0;
//	min = -5;
//	max = -1;
//	size = ft_ultimate_range(&range, min, max);

//	while (i < size)
//	{
//		printf("%d\n", range[i]);
//		i++;
//	}
//	printf("%d\n", size);
//}
