/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddymov <ddymov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 13:54:31 by ddymov            #+#    #+#             */
/*   Updated: 2025/07/17 21:27:57 by ddymov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	nb;

	nb = '0';
	while (nb <= '9')
	{
		write (1, &nb, 1);
		nb++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
}*/
