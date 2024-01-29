/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_flow.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 00:21:13 by roylee            #+#    #+#             */
/*   Updated: 2024/01/29 20:50:37 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
sort_flow.c

Manages what sort to use based on the situation
*/
void	sort_flow(t_data *data)
{
	if (is_sorted(data->stack_a))
		return ;
	if (data->stack_a->size == 2)
		sa(data->stack_a);
	else if (data->stack_a->size == 3)
		sort_3(data);
	else if (data->stack_a->size == 4)
		sort_4(data);
	else if (data->stack_a->size == 5)
		sort_5(data);
	else
		radix_sort(data);
}
