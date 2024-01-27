/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 23:17:32 by roylee            #+#    #+#             */
/*   Updated: 2024/01/27 23:51:44 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
sort_4.c

sort 4 numbers using 2 stacks
*/
void	sort_4(t_data *data)
{
	int		i;
	int		min;
	int		max;

	i = 0;
	min = get_min(data->stack_a);
	max = get_max(data->stack_a);
	while (i < 4)
	{
		if (data->stack_a->head->val == min || data->stack_a->head->val == max)
			pb(data);
		else
			ra(data->stack_a);
		i++;
		printf("%d \n", i);
	}
	sort_3(data);
	pa(data);
}
