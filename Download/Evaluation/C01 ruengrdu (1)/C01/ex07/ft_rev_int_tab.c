/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:27:34 by ruengrdu          #+#    #+#             */
/*   Updated: 2025/07/23 14:12:50 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	size--;
	while (i < size)
	{
		tmp = tab[i];
		tab[i] = tab[size];
		tab[size] = tmp;
		size--;
		i++;
	}
}

int	main(void)
{
	int a[] = {4, 5, 3, 5, 6, 7, 8};
	ft_rev_int_tab(a, 7);
	for (int i = 0; i < 7; i++)
	{
		printf("%d", a[i]);
	}
	
}