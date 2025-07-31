/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 17:58:27 by psuyothe          #+#    #+#             */
/*   Updated: 2025/07/13 16:09:10 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int main()
{
	int tab[5] = {1,9,3,2,0};
	ft_sort_int_tab(tab,5);
	for (int i = 0 ; i < 5 ; i++)
	{
		printf("%d",tab[i]);
	}
}