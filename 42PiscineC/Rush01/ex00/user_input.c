/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   user_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:46:19 by pboorana          #+#    #+#             */
/*   Updated: 2025/07/20 19:32:57 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(char *str);

char	*p_argv(char *argv)
{
	int		i;
	char	*element;

	i = 0;
	element = malloc(4 * 16);
	if (ft_len(argv) != ((16 * 2) - 1))
		return ("false");
	if (argv[i] > '0' && argv[i] <= '9')
	{
		*element++ = argv[i];
		i += 2;
	}
	else
		return ("false");
	while (argv[i - 1] != '\0')
	{
		if (argv[i] > '0' && argv[i] <= '9' && argv[i - 1] == ' ')
			*element++ = argv[i];
		else
			return ("false");
		i += 2;
	}
	return (element - (i / 2));
}
