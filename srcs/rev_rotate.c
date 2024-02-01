/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 00:06:08 by roylee            #+#    #+#             */
/*   Updated: 2024/02/02 00:46:28 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
rrot: reverse rotate - shift down all elements of a stack by 1. The last
element becomes the first.
*/
void	rrot(t_stack *stack)
{
	t_node	*tail;

	if (stack == NULL || stack->tail == NULL)
		return ;
	tail = stack->tail;
	stack->tail = stack->tail->prev;
	stack->tail->next = NULL;
	tail->prev = NULL;
	tail->next = stack->head;
	stack->head->prev = tail;
	stack->head = tail;
}

void	rra(t_stack *stack)
{
	rrot(stack);
	ft_printf("rra\n");
	// print_stack(stack);
}

void	rrb(t_stack *stack)
{
	rrot(stack);
	ft_printf("rrb\n");
	// print_stack(stack);
}

void	rrr(t_data *data)
{
	rot_data(data, &rrot);
	ft_printf("rrr\n");
	// print_data(data);
}
