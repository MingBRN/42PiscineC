/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skye <skye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 23:34:44 by skye              #+#    #+#             */
/*   Updated: 2025/07/21 00:11:42 by skye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_cap_first_alpha(char *str, int *flagged)
{
	if (*flagged == 0)
	{
		if (str[0] >= 97 && str[0] <= 122)
		{
			str[0] -= 32;
		}
		*flagged = 1;
	}
	else if (str[0] >= 65 && str[0] <= 90)
	{
		str[0] += 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flagged;

	i = 0;
	flagged = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)
			|| (str[i] >= 48 && str[i] <= 57))
		{
			ft_cap_first_alpha(&str[i], &flagged);
		}
		else
		{
			flagged = 0;
		}
		i++;
	}
	return (str);
}
// int	main(void)
// {
//     char str[] = "hi, how are you? 42words forty-two; fifty+and+one";
// 	printf("%s\n",ft_strcapitalize(str));
// 	return (0);
// }