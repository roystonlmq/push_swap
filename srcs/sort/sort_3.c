/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 00:16:42 by roylee            #+#    #+#             */
/*   Updated: 2024/01/24 00:19:42 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
sort_3:

Deals with the following permutations (3! = 6)
[1, 2, 3] - no swaps
[1, 3, 2] - sa
[2, 1, 3] - ra
[2, 3, 1] - sa, ra
[3, 1, 2] - rra
[3, 2, 1] - sa, rra
*/
void	sort_3(t_data *data)
{
	if (data->stack_a->head->val > data->stack_a->head->next->val)
	{
		if (data->stack_a->head->val < data->stack_a->head->next->next->val)
			sa(data->stack_a);
		else
			rra(data->stack_a);
	}
	else if (data->stack_a->head->val < data->stack_a->head->next->val)
	{
		if (data->stack_a->head->next->val > 
				data->stack_a->head->next->next->val)
			ra(data->stack_a);
		else
		{
			sa(data->stack_a);
			ra(data->stack_a);
		}
	}
}
