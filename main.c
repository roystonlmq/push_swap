/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:24:02 by roylee            #+#    #+#             */
/*   Updated: 2024/01/28 21:23:36 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_data	*data;
	char	**args;
	int		arg_count;

	args = check_args(argc, argv);
	arg_count = count_args(args);
	data = init_data(arg_count);
	init_stacks(data, arg_count, args);
	fill_stack(data->stack_a, arg_count, args);
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
