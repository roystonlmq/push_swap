/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 21:43:27 by roylee            #+#    #+#             */
/*   Updated: 2023/09/06 22:07:21 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	tmp1 = dest;
	tmp2 = (unsigned char *)src;
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	if (dest > src)
	{
		while (n--)
			tmp1[n] = tmp2[n];
	}
	return (dest);
}
