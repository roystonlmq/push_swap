/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 20:55:08 by roylee            #+#    #+#             */
/*   Updated: 2023/09/16 18:44:32 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}

/*
#include "libft.h"
int	main(void)
{
	int	c1 = -1;
	int	c2 = 0;
	int c3 = ' ';

	printf("%d\n", ft_isprint(c1));
	printf("%d\n", ft_isprint(c2));
	printf("%d\n", ft_isprint(c3));
}
*/
