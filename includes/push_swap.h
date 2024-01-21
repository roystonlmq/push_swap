/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:10:25 by roylee            #+#    #+#             */
/*   Updated: 2024/01/21 16:17:13 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>

# include "libft.h"

typedef struct	s_node
{
	struct s_node	*next;
	struct s_node	*prev;
	int				val;
	int				idx;
}				t_node;

typedef struct	s_stack
{
	struct s_node 	*head;
	struct s_node	*tail;
	struct s_node	*next;
	struct s_node	*prev;
	int				size;
}				t_stack;

typedef struct s_data
{
	t_stack		*stack_a;
	t_stack		*stack_b;
	int			argc;
}				t_data;

/*
init.c
*/
void			init_data(int argc);
void			create_node(t_node *node, int idx, int val);
void			init_stacks(t_data *data, int argc, char **argv);

/*
print.c
*/
void			print_stack(t_stack *stack);

/*
check.c
*/
static int		check_dup(int argc, char **argv);
void			check_args(int argc, char **argv);

/*
error.c
*/
void			ft_error(void);
#endif
