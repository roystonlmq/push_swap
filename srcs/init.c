/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:24:20 by roylee            #+#    #+#             */
/*   Updated: 2024/01/21 16:12:57 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
create_stack
First argument should be top of the stack
*/
static void	create_node(t_node *node, int idx, int val)
{
	int	i;
	node = (t_node *)malloc(sizeof(t_node));
	if (!node)
		ft_error();
	node->next = NULL;
	node->prev = NULL;
	node->val = val;
	node->idx = idx;
}

void	init_stacks(t_data *data, int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = (t_stack *)malloc(sizeof(t_stack));
	if (!stack_a)
		ft_error();
	stack_b = (t_stack *)malloc(sizeof(t_stack));
	if (!stack_b)
		ft_error();
	data = (t_data *)malloc(sizeof(t_data));
	if (!data)
		ft_error();
	data->stack_a = stack_a;
	data->stack_b = stack_b;
	stack_b->head = NULL;
	stack_a->size = argc - 1;
	stack_b->size = 0;
	stack_a->head = create_node(stack_a->head, 0, ft_atoi(argv[1]));
	stack_a->tail = create_node(stack_a->tail, argc - 1, 
			ft_atoi(argv[argc - 1]));
}

t_data	*init_data(int argc)
{
	t_data *data;

	data = (t_data *)malloc(sizeof(t_data));
	if (!data)
		ft_error();
	data->stack_a = stack_a;
	data->stack_b = stack_b;
	data->argc = argc;
	return (data);
}