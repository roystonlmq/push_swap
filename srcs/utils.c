/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 23:48:13 by roylee            #+#    #+#             */
/*   Updated: 2024/01/28 00:40:32 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*get_min_node(t_stack *stack)
{
	t_node	*min_node;
	t_node	*node;
	int		min;

	node = stack->head;
	min = node->val;
	while (node)
	{
		if (node->val < min && node->idx == -1)
		{
			min = node->val;
			min_node = node;
		}
		node = node->next;
	}
	return (min_node);
}

t_node	*get_max_node(t_stack *stack)
{
	t_node	*max_node;
	t_node	*node;
	int		max;

	node = stack->head;
	max_node = node;
	max = node->val;
	while (node)
	{
		if (node->val > max)
		{
			max = node->val;
			max_node = node;
		}
		node = node->next;
	}
	return (max_node);
}
