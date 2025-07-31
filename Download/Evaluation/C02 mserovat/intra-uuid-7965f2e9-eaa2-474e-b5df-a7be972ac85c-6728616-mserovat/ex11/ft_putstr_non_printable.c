/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserovat <mserovat@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 23:06:48 by mserovat          #+#    #+#             */
/*   Updated: 2025/07/22 12:37:34 by mserovat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	if (str[0] != '\0');
		return ;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			write (1, &str[i], 1);
		}
		else
			print_hex(str[i]);
		i++;
	}
}

void	ft_print_hex(char *str)
{
	int	hex;
	int p1
	int	p2

	hex = str[i];
	p1 = 0;
	p2 = 0;
	p1 = hex / 16;
	p2 = hex % 16;
	

}
