/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 14:48:33 by pboorana          #+#    #+#             */
/*   Updated: 2025/07/18 19:38:45 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	dec_to_base(long nbr, char *base, int n)
{
	if (nbr > n - 1)
	{
		dec_to_base(nbr / n, base, n);
	}
	ft_putchar(base[nbr % n]);
}

int	check_double_char(char *base)
{
	int		n;
	char	*buffer;

	n = 0;
	while (*base != '\0' && *base != '+' && *base != '-')
	{
		buffer = base;
		while (*buffer++)
		{
			if (*buffer == *base)
			{
				return (0);
			}
		}
		n++;
		base++;
	}
	return (n);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		n;
	long	nbrl;

	n = 0;
	nbrl = nbr;
	n += check_double_char(base);
	base += check_double_char(base);
	if (n > 1 && *base != '+' && *base != '-')
	{
		if (nbrl < 0)
		{
			nbrl *= -1;
			ft_putchar('-');
		}
		dec_to_base(nbrl, base - n, n);
	}
}

//int	main(int argc, char *argv[])
//{
//	ft_putnbr_base(-2147483648, "01");
//}
