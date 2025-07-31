/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 14:49:01 by slimvutt          #+#    #+#             */
/*   Updated: 2025/07/13 15:25:02 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	a = 50;
	int b = 10;
	int v = 0;
	int q = 0;
	int *div = &v;
	int *mod = &q;
	ft_div_mod(a,b,div,mod);
	printf("%d %d" ,v ,q);
}