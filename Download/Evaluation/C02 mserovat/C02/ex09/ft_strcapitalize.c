/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 17:22:36 by mserovat          #+#    #+#             */
/*   Updated: 2025/07/22 14:35:31 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (str);
	if ((str[0] >= 'a') && (str[0] <= 'z'))
		str[0] = str[0] - 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '-' || str[i] == '+')
		{
			i++;
			if ((str[i] >= 'a') && (str[i] <= 'z'))
			{
				str[i] = str[i] - 32;
				i++;
			}
		}
		else
			i++;
	}
	return (str);
}

int 	main(void)
{
	char a[] = "HELLO";
	printf("%s", ft_strcapitalize(a));

}