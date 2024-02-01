/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 20:57:20 by roylee            #+#    #+#             */
/*   Updated: 2024/02/01 22:37:17 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack *stack)
{
	t_node	*tmp;
	t_node	*tmp2;

	tmp = stack->head;
	while (tmp)
	{
		tmp2 = tmp->next;
		free(tmp);
		tmp = tmp2;
	}
	free(stack);
}

void	free_data(t_data *data)
{
	free_stack(data->stack_a);
	free_stack(data->stack_b);
	free(data);
}

void	free_all(t_data *data)
{
	free_stack(data->stack_a);
	free_stack(data->stack_b);
	free(data);
}

void	free_split(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}
