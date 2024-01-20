/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 21:57:16 by roylee            #+#    #+#             */
/*   Updated: 2023/09/12 20:38:29 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/*
void	ft_print_result(t_list *elem)
{
	int		len;

	len = 0;
	while (((char *)elem->content)[len])
		len++;
	write(1, elem->content, len);
	write(1, "\n", 1);
}

int	main(void)
{
	t_list	*begin;
	t_list	*elem;
	t_list	*elem2;
	t_list	*elem3;
	
	char	*str = strdup("lorem");
	char	*str2 = strdup("ipsum");
	char	*str3 = strdup("dolor");

	elem = ft_lstnew(str);
	elem2 = ft_lstnew(str2);
	elem3 = ft_lstnew(str3);
	begin = NULL;

	ft_lstadd_back(&begin, elem);
	ft_lstadd_back(&begin, elem2);
	ft_lstadd_back(&begin, elem3);
	while (begin)
	{
		ft_print_result(begin);
		begin = begin->next;
	}
}
*/
