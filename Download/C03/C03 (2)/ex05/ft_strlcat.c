/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:32:12 by pboorana          #+#    #+#             */
/*   Updated: 2025/07/15 18:01:26 by pboorana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d_len;
	unsigned int	s_len;
	unsigned int	tofill;

	i = 0;
	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	tofill = size - d_len - 1;
	if (d_len >= size)
	{
		return (size + s_len);
	}
	while (src[i] && tofill--)
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = '\0';
	return (d_len + s_len);
}

//int	main(void)
//{
//	char	dest[] = "Hello";
//	char	*src;

//	src = "12";
//	printf("%d\n", ft_strlcat(dest, src, 10));
//	printf("%s\n", dest);
//}