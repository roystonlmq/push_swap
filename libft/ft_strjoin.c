/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:06:05 by roylee            #+#    #+#             */
/*   Updated: 2023/09/10 17:39:12 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	size_t	len;
	char	*buffer;

	len = ft_strlen(s1) + ft_strlen(s2);
	buffer = (char *)malloc(len + 1);
	if (!buffer)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		buffer[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		buffer[i + j] = s2[j];
		j++;
	}
	buffer[i + j] = 0;
	return (buffer);
}

/*
int	main(void)
{
	char	s1[] = "hello   ";
	char	s2[] = "world     ";


	printf("%s\n", ft_strjoin(s1, s2));
}
*/
