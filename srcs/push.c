/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:35:12 by roylee            #+#    #+#             */
/*   Updated: 2024/01/28 15:01:41 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
push:
Takes two parameters, stack a and stack b. The second argument will push to
the first argument*/
void	push(t_stack *to, t_stack *fm)
{
	t_node	*tmp;

	if (!fm)
		return ;
	if (!to->head)
	{
		to->head = fm->head;
		to->tail = fm->head;
		fm->head = fm->head->next;
		fm->head->prev = NULL;
		to->head->next = NULL;
	}
	else
	{
		tmp = to->head;  // tmp = 1
		to->head = fm->head; // head = 7
		to->head->next = tmp; // 7->next = 1
		tmp->prev = to->head; // 1->prev = 7
	}
	to->size++;
	fm->size--;
}

void	pa(t_data *data)
{
	push(data->stack_a, data->stack_b);
	ft_printf("pa\n");
	print_data(data);
}

void	pb(t_data *data)
{
	push(data->stack_b, data->stack_a);
	ft_printf("pb\n");
	print_data(data);
}
