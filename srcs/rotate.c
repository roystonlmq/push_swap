/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:50:31 by roylee            #+#    #+#             */
/*   Updated: 2024/01/21 19:02:17 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
rot: rotate a stack - shift all elements in that stack up by 1. The first
element becomes the last one.
*/
void	rot(t_stack *stack)
{
	t_node	*head;

	if (stack == NULL || stack->next == NULL)
		return ;
	head = stack->head;
	stack->head = stack->head->next;
	stack->head->prev = NULL;
	head->next = NULL;
	head->prev = stack->tail;
	stack->tail->next = head;
	stack->tail = head;
}

/*
rrot: rotates stack A and stack B at the same time
*/
void	rrot(t_data *data)
{
	rot(data->stack_a);
	rot(data->stack_b);
}
