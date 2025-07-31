/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skye <tphyu@student.42bangkok.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 20:51:13 by skye              #+#    #+#             */
/*   Updated: 2025/07/24 15:36:53 by skye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(('A' <= str[i] && str[i] <= 'Z')
				|| ('a' <= str[i] && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d",ft_str_is_alpha("fhkabiuobgr"));
	return (0);
}*/
