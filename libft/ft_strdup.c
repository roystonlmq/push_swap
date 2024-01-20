/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:22:35 by roylee            #+#    #+#             */
/*   Updated: 2023/09/09 14:32:28 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*buffer;

	buffer = (char *)malloc(ft_strlen(s) + 1);
	if (!buffer)
		return (NULL);
	i = -1;
	while (s[++i])
		buffer[i] = s[i];
	buffer[i] = 0;
	return (buffer);
}

/*
int	main(void)
{
	char *str;
	char test[] = "lorem ipsum dolor sit amet";

	str = ft_strdup(test);
	printf("%s", str);
}
*/
