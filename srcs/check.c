/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 01:06:52 by roylee            #+#    #+#             */
/*   Updated: 2024/01/29 21:44:20 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_dup(int argc, char **argv)
{
	int	len;
	int	arr[argc];
	int	i;

	len = argc;
	ft_bzero(arr, sizeof(arr));
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
				return (-1);
			if (arr[len] > INT_MAX || arr[len] < INT_MIN)
				return(-1);
		}
	}
	return (0);
}

static int	check_num(char *n)
{
	int	i;

	i = 0;
	if (n[0] == '-')
		i++;
	while (n[i])
	{
		if (ft_isdigit(n[i]) == 0)
			return (-1);
		i++;
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
char	**check_args(int argc, char **argv)
{
	int		i;
	int		err;
	char	**args;

	err = 0;
	i = 0;
	if (argc == 1)
		ft_error();
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		args = argv;
	}
	while (args[i])
	{
		if (check_num(args[i]) == -1)
			err = 1;
		if (check_dup(argc, args) == -1)
			err = 1;
		i++;
	}
	if (err == 1)
	{
		free_split(args);
		ft_error();
	}
	return (args);
}

/*
count number of elements in an array
*/
int		count_args(char **args)
{
	int i;

	i = 0;
	while (args[i])
		i++;
	return (i);
}