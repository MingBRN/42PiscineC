/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 12:05:39 by slimvutt          #+#    #+#             */
/*   Updated: 2025/07/13 15:17:52 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{	
	int	a;
	int	*nb1;
	int	**nb2;
	int	***nb3;
	int	****nb4;
	int	*****nb5;
	int	******nb6;
	int	*******nb7;
	int	********nb8;
	int	*********nb9;

	a = 0;
	nb1	= &a;
	nb2	= &nb1;
	nb3	= &nb2;
	nb4	= &nb3;
	nb5	= &nb4;
	nb6	= &nb5;
	nb7	= &nb6;
	nb8	= &nb7;
	nb9	= &nb8;
	ft_ultimate_ft(nb9);
	printf("%d",a);
}
