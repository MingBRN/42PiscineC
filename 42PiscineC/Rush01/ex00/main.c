/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:16:50 by pboorana          #+#    #+#             */
/*   Updated: 2025/07/20 19:50:23 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*p_argv(char *argv);
int		matrix_init(char *data);
int		ft_len(char *str);

int	main(int argc, char *argv[])
{
	char	*p;

	p = "1234234134124123";
	if (argc == 2)
	{
		if (ft_len(p_argv(argv[1])) == 5)
		{
			write(1, "Error", 5);
			return (0);
		}
	}
	else
	{
		write(1, "Error", 5);
		return (0);
	}
	matrix_init(p);
	return (0);
}
