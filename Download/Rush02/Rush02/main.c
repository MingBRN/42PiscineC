/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 08:32:38 by pboorana          #+#    #+#             */
/*   Updated: 2025/07/27 21:09:30 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	main(int argc, char *argv[])
{
	char	*int_input;

	if (argc == 2 && (ft_atoi(argv[1]) >= 0)
		&& ft_check_valid_int(argv[1]) == 0 && argv[1])
	{
		int_input = ft_int_to_char(ft_atoi(argv[1]));
		if (ft_len(int_input) <= 37)
		{
			ft_putchar("Three");
		}
	}
	else if (argc == 3 && (ft_atoi(argv[2]) >= 0)
		&& ft_check_valid_int(argv[2]) == 0 && argv[2])
	{
		int_input = ft_int_to_char(ft_atoi(argv[2]));
		if (ft_len(int_input) <= 37)
		{
			ft_putchar("Three");
		}
	}
	else
		ft_putchar("Error\n");
	return (0);
}
