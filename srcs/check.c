/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 01:06:52 by roylee            #+#    #+#             */
/*   Updated: 2024/01/28 00:04:36 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_dup(int argc, char **argv)
{
	int	len;
	int	arr[argc];
	int	i;

	len = argc;
	while (--len > 0)
		arr[len] = ft_atoi(argv[len]);
	len = argc;
	i = 0;
	while (len-- > 0)
	{
		i = len;
		while (i-- > 0)
		{
			if (arr[len] == arr[i])
				ft_error();
			if (arr[len] > INT_MAX || arr[len] < INT_MIN)
				ft_error();
		}
	}
	return (0);
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

	if (argc == 1)
		ft_error();
	i = argc;
	while (i-- > 1)
	{
		j = ft_strlen(argv[i]);
		while (j-- > 0)
		{
			if (ft_isdigit(argv[i][j]) == 0)
				ft_error();
			if (argv[i][j] == '-' && j != 0)
				ft_error();
			if (check_dup(argc, argv) > 0)
				ft_error();
		}
	}
}
