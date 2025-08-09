/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 19:11:54 by pboorana          #+#    #+#             */
/*   Updated: 2025/07/24 11:10:20 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	while (argc > 1)
	{
		i = 0;
		while (argv[argc - 1][i] != '\0')
		{
			write(1, &argv[argc - 1][i++], 1);
		}
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
