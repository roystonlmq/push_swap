/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 21:40:58 by roylee            #+#    #+#             */
/*   Updated: 2023/09/11 21:48:50 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	sz;

	sz = 0;
	while (lst)
	{
		lst = lst->next;
		sz++;
	}
	return (sz);
}

/*
int	main(void)
{
	t_list lst[3];

	lst[0].content = "hello";
	lst[0].next = NULL;
	lst[1].content = "goodbye";
	lst[1].next = &lst[2];
	lst[2].content = "seeya";
	lst[2].next = 0;

	printf("%d", ft_lstsize(lst));
}
*/
