/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 11:10:14 by nruangno          #+#    #+#             */
/*   Updated: 2025/07/16 13:27:53 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// 
void	ft_ultimate_div_mod(int *a, int *b)
{
	*a = *a / *b;
	*b = *a % *b;
}

 int	main(void)
 {
 	int	a;
 	int	b;

 	a = 20;
 	b = 2;
 	printf("\nStart value is %d and %d\n", a, b);
 	ft_ultimate_div_mod(&a, &b);
 	printf("\n a = %d and b = %d\n", a, b);
 }
 