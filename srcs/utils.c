/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 23:48:13 by roylee            #+#    #+#             */
/*   Updated: 2024/01/27 23:49:14 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		get_min(t_stack *stack)
{
	t_node	*node;
	int		min;

	node = stack->head;
	min = node->val;
	while (node)
	{
		if (node->val < min)
			min = node->val;
		node = node->next;
	}
	return (min);
}

int		get_max(t_stack *stack)
{
	t_node	*node;
	int		max;

	node = stack->head;
	max = node->val;
	while (node)
	{
		if (node->val > max)
			max = node->val;
		node = node->next;
	}
	return (max);
}
