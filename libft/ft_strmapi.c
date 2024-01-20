/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:43:45 by roylee            #+#    #+#             */
/*   Updated: 2023/09/10 20:16:35 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*buffer;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	buffer = (char *)malloc(len + 1);
	if (!buffer)
		return (NULL);
	i = 0;
	ft_strlcpy(buffer, s, len + 1);
	while (buffer[i])
	{
		buffer[i] = f(i, buffer[i]);
		i++;
	}
	return (buffer);
}
