/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 12:10:42 by roylee            #+#    #+#             */
/*   Updated: 2023/09/11 20:29:38 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (ptr1[i] == ptr2[i] && n > 1 && i < n - 1)
		i++;
	return (ptr1[i] - ptr2[i]);
}

/*
int	main(void)
{
	const char	*str1 = "\xff\0\0\xaa\0\xde\xffMACOSX\xff";
	const char	*str2 = "\xff\0\0\xaa\0\xde\x00MBS";
	size_t		len = 9;

	int	result = memcmp(str1, str2, len);
	int	result2 = ft_memcmp(str1, str2, len);
	printf("actual: %d mine: %d\n", result, result2);

}
*/
