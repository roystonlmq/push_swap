/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:24:02 by roylee            #+#    #+#             */
/*   Updated: 2024/01/29 21:48:45 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_data	*data;
	char	**args;
	int		stack_size;

	args = check_args(argc, argv);
	stack_size = count_args(args);
	data = init_data(argc);
	init_stacks(data, stack_size, argc, args);
	fill_stack(data->stack_a, stack_size, argc, args);
	if (argc == 2)
		free_split(args);
	reindex_stack(data->stack_a);
	sort_flow(data);
}
