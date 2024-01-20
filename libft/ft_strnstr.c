/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:01:58 by roylee            #+#    #+#             */
/*   Updated: 2023/09/11 21:11:14 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*save;
	size_t	llen;
	size_t	i;
	size_t	j;

	save = (char *)big;
	llen = ft_strlen(little);
	if (llen == 0)
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j])
		{
			if (little[j] != big[i + j] || (i + j) >= len)
				break ;
			j++;
		}
		if (llen == j)
			return (save + i);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char	haystack[30] = "aaabcabcd";
//	const char	needle[10] = "aabc";
	char *ptr = (char*)"";

	ptr = ft_strnstr(haystack, "a", 1);
	printf("mine: %s\n", ptr);
}
*/
