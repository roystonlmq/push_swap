/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:13:31 by roylee            #+#    #+#             */
/*   Updated: 2024/01/21 16:14:33 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
fill_stack: 
Add the nodes and fill up the stack with the values
*/
void	fill_stack(t_stack *stack, int argc, char **argv)
{
	int		i;
	t_node	*node;

	i = 1;
	node = stack->head;
	while (i < argc)
	{
		node->next = create_node(node->next, i, ft_atoi(argv[i]));
		node->next->prev = node;
		node = node->next;
		i++;
	}
	if (stack->tail != node)
		ft_error();
}