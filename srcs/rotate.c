/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:50:31 by roylee            #+#    #+#             */
/*   Updated: 2024/02/01 23:37:56 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
rot: rotate a stack - shift all elements in that stack up by 1. The first
element becomes the last one.
*/
void	rot(t_stack *stack)
{
	t_node	*hd;
	t_node	*tl;

	if (stack == NULL || stack->head == NULL)
		return ;
	print_stack(stack);
	hd = stack->head;
	tl = stack->tail;
	stack->head = hd->next;
	stack->head->prev = NULL;
	tl->next = hd;
	hd->prev = tl;
	hd->next = NULL;
	stack->tail = hd;
}

void	ra(t_stack *stack)
{
	rot(stack);
	ft_printf("ra\n");
	print_stack(stack);
}

void	rb(t_stack *stack)
{
	rot(stack);
	ft_printf("rb\n");
	print_stack(stack);
}

/*
rot_data: rotates stack A and stack B at the same time
*/
void	rot_data(t_data *data, void (*f)())
{
	f(data->stack_a);
	f(data->stack_b);
}

void	rr(t_data *data)
{
	rot_data(data, &rot);
	ft_printf("rr\n");
	print_data(data);
}
