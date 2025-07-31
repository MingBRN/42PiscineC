/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 17:13:26 by nruangno          #+#    #+#             */
/*   Updated: 2025/07/16 13:26:44 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdio.h>
 
void	ft_swap(int *a, int *b)
{
	int	num;

	num = *a;
	*a = *b;
	*b = num;
}

 int	main(void)
 {
 	int	n1;
 	int	n2;
 	int	*x = &n1;
 	int	*y = &n2;

 	n1 = 4;
 	n2 = 9;

 	ft_swap(x, y);
 	printf("Value of x: %d\n", *x);
 	printf("Value of y: %d\n", *y);
 }