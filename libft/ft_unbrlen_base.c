/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unbrlen_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 21:58:45 by roylee            #+#    #+#             */
/*   Updated: 2023/09/17 13:12:36 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_unbrlen_base(unsigned long n, size_t blen)
{
	size_t	i;

	i = 1;
	while (n >= (unsigned long)blen)
	{
		n /= blen;
		i++;
	}
	return (i);
}
