/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 01:06:52 by roylee            #+#    #+#             */
/*   Updated: 2024/01/21 01:19:43 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_dup(int argc, char **argv)
{
	int	len;
	int	arr[argc];
	int	i;

	len = argc;
	while (--len > 0)
		arr[len] = ft_atoi(argv[len]);
	len = argc;
	i = 0;
	while (--len > 0)
	{
		i = len;
		while (--i > 0)
		{
			if (arr[len] == arr[i])
				ft_error();
		}
	}
}

/*
check_args:

Checks:
- arguments are integers
- arguments are not bigger/smaller than INT_MAX/INT_MIN
- arguments are not duplicated
*/
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
