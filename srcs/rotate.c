/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:50:31 by roylee            #+#    #+#             */
/*   Updated: 2024/01/24 00:08:51 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
rot: rotate a stack - shift all elements in that stack up by 1. The first
element becomes the last one.
*/
void	rot(t_stack *stack)
{
	t_node	*temp;

	if (stack == NULL || stack->head == NULL)
		return ;
	temp = stack->head; // temp = 1
	stack->head = stack->head->next; // head = 2
	stack->head->next->next = temp; // tail->next = 1
	temp->next = NULL; // 1->next = NULL
	temp->prev = stack->head->next->next; // 1->prev = 2
	stack->head->prev = NULL; // 2->prev = NULL
	stack->tail = temp; // tail = 1
}

void	ra(t_stack *stack)
{
	rot(stack);
	ft_printf("ra\n");
}

void	rb(t_stack *stack)
{
	rot(stack);
	ft_printf("rb\n");
}

/*
rot_data: rotates stack A and stack B at the same time
*/
void rot_data(t_data *data, void (*f)())
{
	f(data->stack_a);
	f(data->stack_b);
}

void rr(t_data *data)
{
	rot_data(data, &rot);
	ft_printf("rr\n");
}
