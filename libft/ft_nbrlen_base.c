/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 21:58:45 by roylee            #+#    #+#             */
/*   Updated: 2023/09/15 22:28:25 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nbrlen_base(long long int n, size_t blen)
{
	size_t	i;

	i = 1;
	while (n >= (long long int)blen)
	{
		n /= blen;
		i++;
	}
	return (i);
}
