/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 20:44:46 by roylee            #+#    #+#             */
/*   Updated: 2023/09/17 13:08:49 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(long long int n, int fd)
{
	const char	*base;
	int			nbr_len;

	nbr_len = 0;
	base = "0123456789";
	if (n == LLONG_MIN)
	{
		write(fd, "-9223372036854775807", 20);
		return (20);
	}
	if (n < 0)
	{
		ft_putstr_fd("-", fd);
		nbr_len += ft_putnbr_fd(-n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(base[n], fd);
	nbr_len += ft_nbrlen_base(n, ft_strlen(base));
	return (nbr_len);
}

/*
int	main(void)
{
	int	test = -2147483647;
	ft_putnbr_fd(test, 1);
}
*/
