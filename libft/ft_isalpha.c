/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:57:02 by roylee            #+#    #+#             */
/*   Updated: 2023/09/06 20:35:07 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

static int	ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_isalpha(int c)
{
	if (ft_islower(c) || ft_isupper(c))
		return (1);
	return (0);
}
