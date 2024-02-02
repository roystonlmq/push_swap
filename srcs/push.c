/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:35:12 by roylee            #+#    #+#             */
/*   Updated: 2024/02/02 14:18:39 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	no_to_hd(t_stack *to, t_stack *fm, t_node *tmp, t_node *to_hd)
{
	fm->head = fm->head->next;
	if (fm->head)
		fm->head->prev = NULL;
	to_hd = tmp;
	to_hd->next = NULL;
	to_hd->prev = NULL;
	to->tail = to->head;
	to->head = to_hd;
}

static void	yes_to_hd(t_stack *to, t_stack *fm, t_node *tmp, t_node *to_hd)
{
	fm->head = fm->head->next;
	if (fm->head)
		fm->head->prev = NULL;
	tmp->next = to_hd;
	to_hd->prev = tmp;
	to->head = tmp;
}

/*
push:
Takes two parameters, stack a and stack b. The second argument will push to
the first argument*/
void	push(t_stack *to, t_stack *fm)
{
	t_node	*tmp;
	t_node	*to_hd;
	t_node	*fm_hd;

	if (fm->size == 0)
		return ;
	to_hd = to->head;
	fm_hd = fm->head;
	tmp = fm_hd;
	if (!to->head)
		no_to_hd(to, fm, tmp, to_hd);
	else
		yes_to_hd(to, fm, tmp, to_hd);
	to->size++;
	fm->size--;
}

void	pa(t_data *data)
{
	push(data->stack_a, data->stack_b);
	ft_printf("pa\n");
}

void	pb(t_data *data)
{
	push(data->stack_b, data->stack_a);
	ft_printf("pb\n");
}
