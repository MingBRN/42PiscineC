/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   back_track.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 11:55:37 by pboorana          #+#    #+#             */
/*   Updated: 2025/07/20 19:12:28 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	matrix_init(char *data)
{
	int	matrix[4][4];
	int	pos;

	pos = 0;
	while (pos < 16)
	{
		matrix[pos / 4][pos % 4] = *data++;
		ft_putchar(matrix[pos / 4][pos % 4]);
		ft_putchar(' ');
		pos++;
		if (pos % 4 == 0)
			ft_putchar('\n');
	}
	return (0);
}

int	check_col_row(int matrix[4][4], int pos, int c)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (c == matrix[pos / 4][i])
		{
			return (1);
		}
		if (c == matrix[i][pos % 4])
		{
			return (1);
		}
		i++;
	}
	return (0);
}
