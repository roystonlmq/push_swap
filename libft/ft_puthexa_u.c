/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 22:17:16 by roylee            #+#    #+#             */
/*   Updated: 2023/09/17 16:36:17 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthexa_u(unsigned long n, char s)
{
	char			*base;
	int				nbr_len;
	unsigned int	blen;

	nbr_len = 0;
	if (s == 'p')
	{
		write(1, "0x", 2);
		nbr_len += 2;
	}
	if (s == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	blen = ft_strlen(base);
	if (n >= blen)
	{
		ft_putunbr_base(n / blen, base);
		ft_putunbr_base(n % blen, base);
	}
	else
		write(1, &base[n], 1);
	nbr_len += ft_unbrlen_base(n, blen);
	return (nbr_len);
}
