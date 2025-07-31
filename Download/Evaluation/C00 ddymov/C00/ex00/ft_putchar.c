/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddymov <ddymov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 19:25:38 by ddymov            #+#    #+#             */
/*   Updated: 2025/07/19 09:42:33 by ddymov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
int	main(void)
{
	char	c;

	c = 's';
	ft_putchar(a);
	return (0);
}*/
/*
int	main(void)
{
	ft_putchar('s');
	return (0);
}*/
