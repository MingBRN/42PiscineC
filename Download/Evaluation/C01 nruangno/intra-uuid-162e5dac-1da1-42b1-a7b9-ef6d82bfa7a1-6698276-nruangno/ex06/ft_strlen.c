/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 11:43:06 by nruangno          #+#    #+#             */
/*   Updated: 2025/07/16 13:28:52 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdio.h>
 
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

 int	main(void)
 {
 	char *str = "123";

 	int count = ft_strlen(str);
 	printf("%d\n", count);
 }