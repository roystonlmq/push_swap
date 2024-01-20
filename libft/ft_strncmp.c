/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 00:07:04 by roylee            #+#    #+#             */
/*   Updated: 2023/09/09 00:29:15 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < (n - 1))
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	const char	s1[] = "tesss\200";
	const char	s2[] = "tesss\0";
	size_t		n = 7;
	
	printf("%d", ft_strncmp(s1, s2, n));
	printf("%d", strncmp(s1, s2, n));
}
*/
