/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:24:02 by roylee            #+#    #+#             */
/*   Updated: 2024/01/29 20:26:16 by roylee           ###   ########.fr       */
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
	// rot(data->stack_a);
	// rot_data(data, &rot);
	// rrot(data->stack_a);
	// swap(data->stack_a);
	// push(data->stack_b, data->stack_a);
	// sa(data->stack_a);
	// rra(data->stack_a);
	// sort_3(data);
	sort_flow(data);
	// ra(data->stack_a);
	// print_stack(data->stack_a);
	ft_printf(".................................. \n");
	// print_stack(data->stack_b);
	// sort(&stack_a, &stack_b);
}
