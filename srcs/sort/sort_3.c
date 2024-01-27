/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 00:16:42 by roylee            #+#    #+#             */
/*   Updated: 2024/01/27 23:04:03 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
sort_3:

Deals with the following permutations (3! = 6)
[1, 2, 3] - no swaps
[1, 3, 2] - sa -> [3, 1, 2] ra -> [1, 2, 3]
[2, 1, 3] - sa -> [1, 2, 3]
[2, 3, 1] - rra -> [1, 2, 3]
[3, 1, 2] - ra -> [1, 2, 3]
[3, 2, 1] - sa -> [2, 3, 1] rra -> [1, 2, 3]
*/
void	sort_3(t_data *data)
{
	int		a;
	int		b;
	int		c;

	a = data->stack_a->head->val;
	b = data->stack_a->head->next->val;
	c = data->stack_a->head->next->next->val;
	printf("a: %d, b: %d, c: %d\n", a, b, c);
	if (a < b && b > c && a < c)
	{
		sa(data->stack_a);
		ra(data->stack_a);
	}
	else if (a > b && b < c && a < c)
		sa(data->stack_a);
	else if (a < b && b > c && a > c)
		rra(data->stack_a);
	else if (a > b && b < c && a > c)
		ra(data->stack_a);
	else if (a > b && b > c && a > c)
	{
		sa(data->stack_a);
		rra(data->stack_a);
	}
}
