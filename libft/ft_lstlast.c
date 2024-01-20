/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 21:48:55 by roylee            #+#    #+#             */
/*   Updated: 2023/09/11 21:57:07 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	while (lst)
	{
		tmp = lst->next;
		if (!tmp)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

/*
int	main(void)
{
	t_list	test[4];

	test[0].content = "1";
	test[0].next = &test[1];
	test[1].content = "2";
	test[1].next = &test[2];
	test[2].content = "3";
	test[2].next = &test[3];
	test[3].content = "4";
	test[3].next = 0;

	t_list *last_node = ft_lstlast(test);
	char	*res = last_node->content;
	printf("%s\n", res);
}
*/
