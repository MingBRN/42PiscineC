/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:55:26 by slimvutt          #+#    #+#             */
/*   Updated: 2025/07/13 15:28:50 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	j;
	int	i;
	int	temp;

	i = 0;
	while (1)
	{
		i = 0;
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] >= tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
				i = 1;
			}
			j++;
		}
		if (i == 0)
		{
			break ;
		}
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
//c
//{1,4,3,2,5}
//{1,3,2,4,5}
//{1,2,3,4,5}
