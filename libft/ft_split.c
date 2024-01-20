/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:22:50 by roylee            #+#    #+#             */
/*   Updated: 2023/09/12 21:59:33 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_sep(char s, char c)
{
	return (s == c);
}

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && check_sep(s[i], c))
			i++;
		if (s[i])
			count++;
		while (s[i] && !check_sep(s[i], c))
			i++;
	}
	return (count);
}

static int	ft_strlen_sep(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && !check_sep(s[i], c))
		i++;
	return (i);
}

static char	*ft_word(char const *s, char c)
{
	int		wlen;
	int		i;
	char	*word;

	i = 0;
	wlen = ft_strlen_sep(s, c);
	word = (char *)malloc(wlen + 1);
	if (!word)
		return (NULL);
	while (i < wlen)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = 0;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	char	*str;
	int		i;

	i = 0;
	str = (char *)s;
	ret = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!ret)
		return (NULL);
	while (*str)
	{
		while (*str && check_sep(*str, c))
			str++;
		if (*str)
		{
			ret[i] = ft_word(str, c);
			i++;
		}
		while (*str && !check_sep(*str, c))
			str++;
	}
	ret[i] = 0;
	return (ret);
}

/*
int	main(void)
{
	char s[] = "lorem ipsum dolor sit amet, consectetur adipisc    ing elit. 
Sed non risus. Suspendisse";
	char c = ' ';
	char	**res = ft_split(s, c);
	for (int i = 0; res[i]; i++)
	{
		printf("%s\n", res[i]);
	}
}
*/
