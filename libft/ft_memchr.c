/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 11:48:25 by roylee            #+#    #+#             */
/*   Updated: 2023/09/10 21:50:24 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (n > i)
	{
		if (ptr[i] == (unsigned char)c)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}

/*
#include <string.h>
#include <stdio.h>
int main() {
	char s[] = {0, 1, 2, 3, 4, 5};
	char *ptr = ft_memchr(s, 2, 3);
	printf("%s", ptr);
}
*/
