/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaichan <kaichan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 04:44:52 by kaichan           #+#    #+#             */
/*   Updated: 2025/07/30 22:36:17 by kaichan          ###   ########.fr       */
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
	array = (int *) malloc((max - min) * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	while (min < max)
	{
		array[j] = min;
		min++;
		j++;
	}
	return (array);
}

/*int	main(void)
{
	int	maximum;
	int	minimum;
	int	i;

	maximum = 16;
	minimum = -3;
	i = 0;
	int	*arr = ft_range(minimum, maximum);
	while ( i < maximum - minimum)
	{
		printf("%d\n",arr[i]);
		i++;
	}
	return (0);
}*/