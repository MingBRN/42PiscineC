/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 17:58:46 by nruangno          #+#    #+#             */
/*   Updated: 2025/07/16 13:27:15 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// 
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

 int	main(void)
 {
 	int	x;
 	int	y;
 	int	div;
 	int	mod;

 	x = 14;
 	y = 3;
 	ft_div_mod(x, y, &div, &mod);
 	printf("\n%d/%d = %d with remainder is %d\n", x, y, div, mod);
 }
 