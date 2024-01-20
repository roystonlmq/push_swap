/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 21:35:57 by roylee            #+#    #+#             */
/*   Updated: 2023/09/11 20:24:09 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_cpy;
	unsigned char	*src_cpy;
	size_t			i;

	if (!dest && !src)
		return (0);
	dest_cpy = (unsigned char *)dest;
	src_cpy = (unsigned char *)src;
	i = 0;
	while (n > 0 && i < n)
	{
		dest_cpy[i] = src_cpy[i];
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	ft_memcpy(((void *)0), ((void *)0), 3);
}
*/
