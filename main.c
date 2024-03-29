/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:24:02 by roylee            #+#    #+#             */
/*   Updated: 2024/02/08 21:09:34 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_data	*data;
	char	**args;
	int		stack_size;

	args = check_args(argc, argv, 0);
	if (!args)
		ft_error();
	stack_size = count_args(args, 0, 0);
	data = init_data(argc);
	init_stacks(data, stack_size, argc, args);
	fill_stack(data->stack_a, stack_size, argc, args);
	if (argc == 2)
		free_split(args);
	reindex_stack(data->stack_a);
	sort_flow(data);
	free_data(data);
}
