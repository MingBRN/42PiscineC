/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 10:38:17 by pboorana          #+#    #+#             */
/*   Updated: 2025/07/13 11:33:57 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	len;

	len = 0;
	while (*(src + len) && --size)
	{
		*dest++ = *(src + len++);
	}
	*dest = '\0';
	while (*(src + len))
	{
		++len;
	}
	return (len);
}
