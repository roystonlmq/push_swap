/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:11:17 by roylee            #+#    #+#             */
/*   Updated: 2024/01/21 16:11:42 by roylee           ###   ########.fr       */
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
		printf("node->idx: %d\n", node->idx);
		printf("node->val: %d\n", node->val);
		node = node->next;
	}
}