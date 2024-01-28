/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:10:25 by roylee            #+#    #+#             */
/*   Updated: 2024/01/28 20:39:49 by roylee           ###   ########.fr       */
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
t_data			*init_data(int argc);
t_node			*create_node(int val);
void			init_stacks(t_data *data, int argc, char **argv);

/*
load.c
*/
void			fill_stack(t_stack *stack, int argc, char **argv);
void			reindex_stack(t_stack *stack);

/*
push.c
*/
void			pa(t_data *data);
void			pb(t_data *data);
void			push(t_stack *stack_a, t_stack *stack_b);

/*
swap.c
*/
void			sa(t_stack *stack_a);
void			sb(t_stack *stack_b);
void			ss(t_data *data);
void			swap(t_stack *stack);
void			swap_data(t_data *data);

/*
rotate.c
*/

void			rr(t_data *data);
void			rot(t_stack *stack);
void			ra(t_stack *stack_a);
void			rb(t_stack *stack_b);
void 			rot_data(t_data *data, void (*f)());

/*
rev_rotate.c
*/
void			rrot(t_stack *stack);
void			rra(t_stack *stack_a);
void			rrb(t_stack *stack_b);
void			rrr(t_data *data);

/*
check.c
*/
void			check_args(int argc, char **argv);

/*
error.c
*/
void			ft_error(void);

/*
print.c
*/
void			print_stack(t_stack *stack);
void			print_b(t_stack *stack);
void			print_data(t_data *data);

/*
print_op.c
*/
void			print_op(char *op);

/*
utils.c
*/
int				find_idx(t_stack *stack, int idx);
int				min_idx(t_stack *stack, int p_idx);
t_node			*get_min_node(t_stack *stack);
t_node			*get_max_node(t_stack *stack);

// DIR: sort
/*
sort_flow.c
*/
void			sort_flow(t_data *data);

/*
is_sorted.c
*/
int			is_sorted(t_stack *stack);

/*
sort_2.c
*/
void			sort_2(t_data *data);

/*
sort_3.c
*/
void			sort_3(t_data *data);

/*
sort_4.c
*/
void			sort_4(t_data *data);

/*
sort_5.c
*/
void			sort_5(t_data *data);
#endif
