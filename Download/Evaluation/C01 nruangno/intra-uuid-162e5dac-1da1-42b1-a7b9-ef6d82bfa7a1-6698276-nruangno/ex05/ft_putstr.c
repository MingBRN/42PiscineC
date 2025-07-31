/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 11:27:43 by nruangno          #+#    #+#             */
/*   Updated: 2025/07/16 13:28:29 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdio.h>
 #include <unistd.h>
 
void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		write(1, str, 1);
		str++;
	}
}

 int	main(void)
 {
 	char	*s;

 	s = "Wonderf*(*&*&8783l";
 	ft_putstr(s);
 	printf("\n");
 }
 