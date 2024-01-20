/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 20:44:46 by roylee            #+#    #+#             */
/*   Updated: 2023/09/17 15:56:48 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putunbr_base(unsigned long n, const char *base)
{
	unsigned long			blen;
	int						nbr_len;

	nbr_len = 0;
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
/*
int	main(void)
{
	int	test = -1;
	const char *base = "0123456789abcdef";
	ft_putunbr_base(test, base);
}
*/
