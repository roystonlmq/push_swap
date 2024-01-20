/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 12:35:17 by roylee            #+#    #+#             */
/*   Updated: 2023/09/09 13:00:09 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*nptr == ' ' || (*nptr >= '\t' && *nptr <= '\r'))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
		result = (*(nptr++) - '0') + result * 10;
	return (result * sign);
}

/*
#include <stdio.h>
int	main(void)
{
	const char	*nptr = "	-1aaa234";
	
	int	res = ft_atoi(nptr);
	printf("%d", res);
	printf("actual: %d mine: %d", atoi(nptr), ft_atoi(nptr));
}
*/
