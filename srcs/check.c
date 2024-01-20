/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 01:06:52 by roylee            #+#    #+#             */
/*   Updated: 2024/01/21 01:08:50 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_args(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	**split;

	i = 0;
	while (++i < argc)
	{
		j = -1;
		split = ft_split(argv[i], ' ');
		while (split[++j])
		{
			k = -1;
			while (split[j][++k])
			{
				if (!ft_isdigit(split[j][k]) && split[j][k] != '-')
					ft_error();
			}
		}
	}
}
