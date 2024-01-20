/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:55:35 by roylee            #+#    #+#             */
/*   Updated: 2023/09/10 20:17:33 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	iter(unsigned int i, char *c)
{
	static int	indexArray[11] = {0};

	if (i > 10 || indexArray[i] == 1)
		write(1, "Wrong index\n", 12);
	else
		indexArray[i] = 1;
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
	else if (*c >= 'A' && *c <= 'Z')
		*c = *c + 32;
}

int	main(void)
{
	char	*str;

	str = (char *)malloc(sizeof(*str) * 12);
	{
		ft_strlcpy(str, "LoReM iPsUm", 12);
		ft_striteri(str, &iter);
		printf("%s\n", str);
	}
}
*/
