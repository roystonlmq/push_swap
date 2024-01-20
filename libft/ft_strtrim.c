/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:18:21 by roylee            #+#    #+#             */
/*   Updated: 2023/09/10 18:22:01 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*ret;

	ret = 0;
	if (s1 && set)
	{
		i = 0;
		j = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > i)
			j--;
		ret = (char *)malloc(j - i + 1);
		if (ret)
			ft_strlcpy(ret, &s1[i], j - i + 1);
	}
	return (ret);
}

/*
int	main(void)
{
	char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
	char s2[] = "lorem ipsum dolor sit amet";
	char s3[] = " lorem ipsum dolor sit amet";
	char s4[] = "lorem ipsum dolor sit amet";
	char s5[] = "          ";
	printf("%s\n", ft_strtrim(s1, " "));
	printf("%s\n", ft_strtrim(s2, "te"));
	printf("%s\n", ft_strtrim(s3, "l "));
	printf("%s\n", ft_strtrim(s4, "tel"));
	printf("%s\n", ft_strtrim(s5, " "));
}
*/
