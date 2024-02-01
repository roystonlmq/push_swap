/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 23:48:13 by roylee            #+#    #+#             */
/*   Updated: 2024/02/02 00:10:52 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
Function to look for index
*/
int	find_idx(t_stack *stack, int find)
{
	t_node	*node;
	int		idx;

	idx = 0;
	node = stack->head;
	while (node)
	{
		if (node->idx == find)
			return (idx);
		idx++;
		node = node->next;
	}
	return (-1);
}

int	min_idx(t_stack *stack, int p_idx)
{
	t_node	*node;
	int		min;

	node = stack->head;
	min = node->idx;
	while (node->next)
	{
		node = node->next;
		if (node->idx < min && node->idx != p_idx)
			min = node->idx;
	}
	return (min);
}

t_node	*get_min_node(t_stack *stack)
{
	t_node	*min_node;
	t_node	*node;
	int		min_flag;

	node = stack->head;
	min_node = node;
	min_flag = 0;
	while (node)
	{
		if ((node->val <= min_node->val || !min_flag) && node->idx == -1)
		{
			min_node = node;
			min_node->val = node->val;
			min_flag = 1;
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

/*
count number of elements in an array
*/
int		count_args(char **args, int i, int flag)
{
	while (args[i])
		i++;
	if (flag == 1)
		i--;
	return (i);
}
