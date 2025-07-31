/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:27:34 by ruengrdu          #+#    #+#             */
/*   Updated: 2025/07/16 10:42:20 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i <= size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = tmp;
	
		i++;
	}
}

#include <stdio.h>

int	main(void)
{
	int arr[] = {1, 2, 3, 4, 5, 8, 4};
	int i;
	int size = 7;

	ft_rev_int_tab(arr, size);
	i = 0;
	while (i < size)
	{
		printf("array %d = %d \n", i, arr[i]);
		i++;
	}
}
