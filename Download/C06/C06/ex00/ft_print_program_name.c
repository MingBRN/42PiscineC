/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:46:31 by pboorana          #+#    #+#             */
/*   Updated: 2025/07/23 19:04:29 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 1)
	{
		while (argv[0][i] != '\0')
		{
			write(1, &argv[0][i++], 1);
		}
		write(1, "\n", 1);
	}
	return (0);
}
