/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 15:33:07 by nruangno          #+#    #+#             */
/*   Updated: 2025/07/16 13:26:31 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

 int	main(void)
 {
 	int	i;
 	int	*nbr1;
 	int	**nbr2;
 	int	***nbr3;
 	int	****nbr4;
 	int	*****nbr5;
 	int	******nbr6;
 	int	*******nbr7;
 	int	********nbr8;
 	int	*********nbr9;

 	i = 54;
 	nbr1 = &i;
 	nbr2 = &nbr1;
 	nbr3 = &nbr2;
 	nbr4 = &nbr3;
 	nbr5 = &nbr4;
 	nbr6 = &nbr5;
 	nbr7 = &nbr6;
 	nbr8 = &nbr7;
 	nbr9 = &nbr8;
 	ft_ultimate_ft(nbr9);
 	printf("%d\n", i);
 }
