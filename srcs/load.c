/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:13:31 by roylee            #+#    #+#             */
/*   Updated: 2024/01/23 20:28:36 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
fill_stack:
Add the nodes and fill up the stack with the values
Adjustment to i to calculate the index of the node
Skips head
*/
void	fill_stack(t_stack *stack, int argc, char **argv)
{
	int		i;
	t_node	*node;

	i = 1;
	node = stack->head;
	if (!node)
	{
		node = create_node(0, ft_atoi(argv[1]));
		stack->head = node;
	}
	while (++i < argc)
	{
		node->next = create_node(i - 1, ft_atoi(argv[i]));
		node->next->prev = node;
		node = node->next;
	}
	stack->tail = node;
}
