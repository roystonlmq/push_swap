/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:24:20 by roylee            #+#    #+#             */
/*   Updated: 2024/02/08 22:37:53 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
create_stack
First argument should be top of the stack
*/
t_node	*create_node(int val)
{
	t_node	*node;

	node = (t_node *)ft_calloc(1, sizeof(t_node));
	if (!node)
		ft_error();
	node->next = NULL;
	node->prev = NULL;
	node->val = val;
	node->idx = -1;
	return (node);
}

void	init_stacks(t_data *data, int stack_size, int argc, char **args)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = (t_stack *)ft_calloc(1, sizeof(t_stack));
	if (!stack_a)
		ft_error();
	stack_b = (t_stack *)ft_calloc(1, sizeof(t_stack));
	if (!stack_b)
		ft_error();
	stack_b->head = NULL;
	stack_a->size = stack_size;
	stack_b->size = 0;
	if ((argc == 2 && stack_a->size > 1) || argc > 2)
		stack_a->head = create_node(ft_atoi(args[0]));
	if (stack_a->size <= 1)
	{
		free(stack_a);
		free(stack_b);
		free(data);
		free_split(args);
		exit(0);
	}
	data->stack_a = stack_a;
	data->stack_b = stack_b;
}

t_data	*init_data(int argc)
{
	t_data	*data;

	data = (t_data *)ft_calloc(1, sizeof(t_data));
	if (!data)
		ft_error();
	data->argc = argc;
	return (data);
}
