/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 12:35:17 by roylee            #+#    #+#             */
/*   Updated: 2024/02/06 20:22:10 by roylee           ###   ########.fr       */
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

long	ft_atol(const char *nptr)
{
	long	sign;
	long	result;

	sign = 1;
	result = 0;
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
