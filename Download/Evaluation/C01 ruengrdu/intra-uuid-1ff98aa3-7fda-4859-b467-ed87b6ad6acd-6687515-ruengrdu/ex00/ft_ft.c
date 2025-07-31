/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruengrdu <ruengrdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 10:01:41 by ruengrdu          #+#    #+#             */
/*   Updated: 2025/07/16 07:12:03 by ruengrdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/**/
#include <stdio.h>

int	main(void)
{
	int a = 5;
	int *ptr = &a;
	printf("Before : a = %d &a = %p \n", a, &a);
	ft_ft(ptr);
	printf("After : a = %d &a = %p \n", a, &a);
}
