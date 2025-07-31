/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruengrdu <ruengrdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 09:54:25 by wcorrea-          #+#    #+#             */
/*   Updated: 2025/07/16 08:35:56 by ruengrdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
int	main(void)
{
	char	*str;
	int	length;

	str = "Hello World!";
	length = ft_strlen(str);
	printf("String: %s\nLength: %d\n", str, length);
	return (0);
}*/
