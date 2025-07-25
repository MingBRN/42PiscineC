/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 19:19:00 by pboorana          #+#    #+#             */
/*   Updated: 2025/07/24 17:21:26 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_print(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc < 2)
		return (0);
	while (i < (argc - 1))
	{
		j = 0;
		while ((argv[i][j] != '\0' || argv[i + 1][j] != '\0')
			&& (argv[i][j] == argv[i + 1][j]))
			j++;
		if (argv[i][j] > argv[i + 1][j])
		{
			ft_swap(&argv[i], &argv[i + 1]);.
			i = 0;
		}
		i++;
	}
	while (*(++argv))
		ft_print(*(argv));
	return (0);
}
