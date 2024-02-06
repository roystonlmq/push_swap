/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 01:06:52 by roylee            #+#    #+#             */
/*   Updated: 2024/02/06 20:08:00 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_dup2(int len, int j, int *arr)
{
	int	i;

	while (len > j)
	{
		i = 0;
		while (len - 1 - i > -1)
		{
			if (arr[len - 1 - i] == arr[len])
				return (-1);
			i++;
		}
		len--;
	}
	return (0);
}

static int	check_dup(int argc, char **args, int flag)
{
	int	len;
	int	*arr;
	int	i;

	i = -1;
	arr = ft_calloc(argc, sizeof(int));
	len = argc;
	if (flag == 0)
	{
		len--;
		i = -1;
	}
	while (len > i)
	{
		arr[len] = ft_atoi(args[len]);
		len--;
	}
	len = argc;
	if (flag == 0)
		len--;
	if (check_dup2(len, i, arr) == -1)
		return (-1);
	free(arr);
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

static int	check_free_err(int i, int err, int flag, char **args)
{
	int	j;
	int	argc;

	j = i;
	while (args[i])
	{
		if (check_num(args[i]) == -1)
			err = 1;
		if (ft_atoi(args[i]) > INT_MAX || ft_atoi(args[i]) < INT_MIN)
			err = 1;
		i++;
	}
	argc = count_args(args, j, flag);
	if (check_dup(argc, args, flag) == -1)
		err = 1;
	if (err == 1 && flag == 0)
	{
		free_split(args);
		ft_error();
	}
	if (err == 1)
		ft_error();
	return (0);
}

/*
check_args:

Checks:
- arguments are integers
- arguments are not bigger/smaller than INT_MAX/INT_MIN
- arguments are not duplicated
*/
char	**check_args(int argc, char **argv, int i)
{
	int		flag;
	int		err;
	char	**args;

	err = 0;
	flag = 0;
	i = 0;
	if (argc == 1)
		ft_error();
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		args = argv + 1;
		flag = 1;
	}
	if (!check_free_err(i, err, flag, args))
		return (args);
	return (NULL);
}
