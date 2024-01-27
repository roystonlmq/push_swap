/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:24:02 by roylee            #+#    #+#             */
/*   Updated: 2024/01/28 00:16:55 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_data	*data;

	check_args(argc, argv);
	data = init_data(argc);
	init_stacks(data, argc, argv);
	fill_stack(data->stack_a, argc, argv);
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
	print_stack(data->stack_a);
	ft_printf(".................................. \n");
	// print_stack(data->stack_b);
	// sort(&stack_a, &stack_b);
}
