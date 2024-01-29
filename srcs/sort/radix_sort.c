/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 20:40:45 by roylee            #+#    #+#             */
/*   Updated: 2024/01/29 21:46:04 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
find most significant bit
a.k.a bit farthest to the left

*/
static int	get_bit(int num, int bit_pos)
{
	return ((num >> bit_pos) & 1);
}

int	max_bit_pos(t_stack *stack)
{
	int		max_idx;
	int		bit_pos;
	t_node	*hd;

	hd = stack->head;
	max_idx = hd->idx;
	bit_pos = 0;
	while (hd)
	{
		if (hd->idx > max_idx)
			max_idx = hd->idx;
		hd = hd->next;
	}
	while ((max_idx >> bit_pos) != 0)
		bit_pos++;
	return (bit_pos);
}

void	radix_sort(t_data *data)
{
	int		bit_pos;
	int		i;
	int		j;
	int		sz;

	sz = data->stack_a->size;
	bit_pos = max_bit_pos(data->stack_a);
	i = 0;
	while (i < bit_pos)
	{
		j = 0;
		while (j++ < sz)
		{
			if ((get_bit(data->stack_a->head->idx, i)) == 1)
				ra(data->stack_a);
			else
				pb(data);
		}
		while (data->stack_b->size != 0)
			pa(data);
		i++;
	}
}
