/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:24:02 by roylee            #+#    #+#             */
/*   Updated: 2024/01/21 16:54:43 by roylee           ###   ########.fr       */
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
	rot(data->stack_a);
	print_stack(data->stack_a);
	// sort(&stack_a, &stack_b);
}
