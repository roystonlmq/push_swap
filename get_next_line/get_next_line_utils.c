/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:27:40 by roylee            #+#    #+#             */
/*   Updated: 2024/01/20 18:10:09 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_free(char **s1, char **s2, char **s3)
{
	if (s1 && *s1)
	{
		free(*s1);
		*s1 = NULL;
	}
	if (s2 && *s2)
	{
		free(*s2);
		*s2 = NULL;
	}
	if (s3 && *s3)
	{
		free(*s3);
		*s3 = NULL;
	}
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	void			*ret;
	size_t			len;

	len = nmemb * size;
	ret = malloc(len);
	if (!ret)
		return (NULL);
	ptr = (unsigned char *)ret;
	while (len)
	{
		*(ptr++) = 0;
		len--;
	}
	return (ret);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*s3;
	int		len;
	int		i;

	len = 0;
	if (!s1 && !s2)
		return (0);
	while (s1[len])
		len++;
	i = 0;
	while (s2[i])
		i++;
	s3 = ft_calloc(len + i + 1, sizeof(*s3));
	if (!s3)
		return (0);
	len = -1;
	while (s1[++len])
		s3[len] = s1[len];
	i = -1;
	while (s2[++i])
		s3[len + i] = s2[i];
	return (s3);
}

int	ft_check_nl(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		i;

	if (!s)
		return (ft_strdup(""));
	i = 0;
	while (s[i])
		i++;
	dup = ft_calloc(i + 1, sizeof(*s));
	if (!dup)
		return (0);
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	return (dup);
}
