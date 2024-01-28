/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 23:17:32 by roylee            #+#    #+#             */
/*   Updated: 2024/01/28 14:51:57 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
sort_4.c

sort 4 numbers using 2 stacks
*/
void	sort_4(t_data *data)
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
		rra(data->stack_a);
	if (is_sorted(data->stack_a))
		return ;
	pb(data);
	sort_3(data);
	pa(data);
}
