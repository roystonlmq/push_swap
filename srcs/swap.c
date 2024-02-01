/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 01:22:09 by roylee            #+#    #+#             */
/*   Updated: 2024/02/02 00:46:21 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
swap:
	swap the first 2 elements at the top of a stack. Do nothing
	if there is only one or no elements.
*/
void	swap(t_stack *stack)
{
	int	tmp;

	if (stack->size > 1)
	{
		tmp = stack->head->val;
		stack->head->val = stack->head->next->val;
		stack->head->next->val = tmp;
	}
}

void	swap_data(t_data *data)
{
	swap(data->stack_a);
	swap(data->stack_b);
	ft_printf("ss\n");
	// print_data(data);
}

void	sa(t_stack *stack)
{
	swap(stack);
	ft_printf("sa\n");
	// print_stack(stack);
}

void	sb(t_stack *stack)
{
	swap(stack);
	ft_printf("sb\n");
	// print_stack(stack);
}
