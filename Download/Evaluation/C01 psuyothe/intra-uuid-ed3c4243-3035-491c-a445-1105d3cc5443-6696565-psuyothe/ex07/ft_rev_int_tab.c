/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 16:02:28 by psuyothe          #+#    #+#             */
/*   Updated: 2025/07/13 16:41:51 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size - 1;
	while (!(start == end || start == end + 1))
	{
		temp = *(tab + start);
		*(tab + start) = *(tab + end);
		*(tab + end) = temp;
		start++;
		end--;
	}
}

int	main(void)
{
	int tab[6] = {1, 2, 3, 4, 0, 9};
	ft_rev_int_tab(tab, 6);
	for (int i = 0; i < 6; i++)
	{
		printf("%d", tab[i]);
	}
}
