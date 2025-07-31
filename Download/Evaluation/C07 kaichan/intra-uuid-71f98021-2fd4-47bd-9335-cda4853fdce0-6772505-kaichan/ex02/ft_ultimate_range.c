/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaichan <kaichan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 04:44:52 by kaichan           #+#    #+#             */
/*   Updated: 2025/07/30 22:36:13 by kaichan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	j;

	j = 0;
	if (min >= max)
		return (0);
	array = (int *)malloc((max - min) * sizeof(int));
	if (array == 0)
		return (0);
	while (min < max)
	{
		array[j] = min;
		min++;
		j++;
	}
	return (array);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == (NULL))
		return (0);
	return (max - min);
}

/*int main(void)
{
	int *range;
	int size;
	int i;

	size = ft_ultimate_range(&range, 3, 8);
	if (size == 0)
	{
		printf("Empty range or error\n");
		return (1);
	}

	printf("Range size: %d\n", size);
	
	i = 0;
	while ( i < size)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n");

	free(range);  // Important to prevent memory leak!
	return (0);
}*/