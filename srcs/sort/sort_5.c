/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:17:58 by roylee            #+#    #+#             */
/*   Updated: 2024/01/28 16:20:40 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
sort_5: uses the 3/2 strategy to sort 5 numbers
*/
void	sort_5(t_data *data)
{
	int	idx;

	idx = find_idx(data->stack_a, min_idx(data->stack_a, -1));
	if (idx == 1)
		ra(data->stack_a);
	else if (idx == 2)
	{
		ra(data->stack_a);
		ra(data->stack_a);
	}
	else if (idx == 3)
	{
		rra(data->stack_a);
		rra(data->stack_a);
	}
	else if (idx == 4)
		rra(data->stack_a);
	if (is_sorted(data->stack_a))
		return ;
	pb(data);
	sort_4(data);
	pa(data);
}
