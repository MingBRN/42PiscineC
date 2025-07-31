/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 14:08:35 by pboorana          #+#    #+#             */
/*   Updated: 2025/07/29 15:08:27 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (-1);
	while (min < max)
	{
		tab[i++] = min++;
	}
	*range = tab;
	return (i);
}

//int	main(void)
//{
//	int	*p;

//	printf("i: %d\n", ft_ultimate_range(&p, 5, 12));
//	for (int i = 0; i < 7; i++)
//	{
//		printf("%d", p[i]);
//	}
//	write(1, p, 7);
//}
