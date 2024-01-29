/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:13:31 by roylee            #+#    #+#             */
/*   Updated: 2024/01/29 20:26:13 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
fill_stack:
Add the nodes and fill up the stack with the values
Adjustment to i to calculate the index of the node
Skips head
*/
void	fill_stack(t_stack *stack, int stack_size, int argc, char **args)
{
	int		i;
	t_node	*node;

	if (argc == 2)
		i = 0;
	else
		i = 1;
	node = stack->head;
	if (!node)
	{
		node = create_node(ft_atoi(args[1]));
		stack->head = node;
	}
	while (++i < stack_size)
	{
		node->next = create_node(ft_atoi(args[i]));
		node->next->prev = node;
		node = node->next;
	}
	stack->tail = node;
}

/*
reindex stack:
Since there are no duplicates, we can reindex the stack with
0 to N - 1 values where N is the size of the stack
*/
void	reindex_stack(t_stack *stack)
{
	t_node	*head;
	int		i;

	i = 0;
	head = get_min_node(stack);
	while (i < stack->size)
	{
		head->idx = i++;
		head = get_min_node(stack);
	}
}
