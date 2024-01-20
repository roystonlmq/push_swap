/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 21:33:51 by roylee            #+#    #+#             */
/*   Updated: 2023/09/11 20:44:18 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (unsigned char)c)
		s++;
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (0);
}
/*
// (char *) NULL -> null pointer to a pointer of type char*
// In modern C & C++ stds, 0 is used directly to represent a null ptr
// More idiomatic & readable, avoids unnecessary typecasting
int	main(void)
{
	const char	test[] = "tripouille";
	int		c = 't' + 256;
	printf("%s", ft_strchr(test, c));
}
*/
