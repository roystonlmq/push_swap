/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:11:12 by roylee            #+#    #+#             */
/*   Updated: 2023/09/10 19:42:37 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	get_nbr_len(int n)
{
	int	len;
	int	nbr;

	len = 0;
	nbr = n;
	if (nbr < 0)
	{
		len++;
		nbr = -nbr;
	}
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	len;
	long	nbr;
	char	*buffer;

	nbr = n;
	len = get_nbr_len(n);
	buffer = (char *)malloc(len + 1);
	if (!buffer)
		return (NULL);
	if (nbr < 0)
	{
		buffer[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		buffer[0] = '0';
	buffer[len] = 0;
	while (nbr)
	{
		buffer[len - 1] = (nbr % 10) + '0';
		nbr /= 10;
		len--;
	}
	return (buffer);
}

/*
#include <limits.h>
int	main(void)
{
	int	test = INT_MAX;
	char *res = ft_itoa(test);
	printf("%s", res);
}
*/
