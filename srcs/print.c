/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:11:17 by roylee            #+#    #+#             */
/*   Updated: 2024/01/28 15:22:12 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
Prints out the nodes, their content in the stack
*/
void	print_stack(t_stack *stack)
{
	t_node	*node;

	node = stack->head;
	while (node)
	{
		printf("        %d idx: %d\n", node->val, node->idx);
		node = node->next;
	}
	printf("--------a sz:%d\n", stack->size);
}

void	print_b(t_stack *stack)
{
	t_node	*node;

	node = stack->head;
	while (node)
	{
		printf("        %d idx: %d\n", node->val, node->idx);
		node = node->next;
	}
	printf("--------b sz:%d\n", stack->size);
}

void	print_data(t_data *data)
{
	print_stack(data->stack_a);
	printf("stack_b\n");
	print_b(data->stack_b);
	printf("--------\n");
}
