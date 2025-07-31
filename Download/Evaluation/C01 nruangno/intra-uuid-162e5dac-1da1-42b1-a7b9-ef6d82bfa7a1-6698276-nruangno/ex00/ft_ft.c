/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 19:06:14 by nruangno          #+#    #+#             */
/*   Updated: 2025/07/16 13:25:58 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

 int	main(void)
 {
 	int	test_nbr;

 	test_nbr = 53;
 	ft_ft(&test_nbr);
 	printf("%d\n", test_nbr);
 }
