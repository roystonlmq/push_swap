/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:27:50 by roylee            #+#    #+#             */
/*   Updated: 2024/01/10 20:54:01 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_read_nl(int fd, char **mem, char **tmp)
{
	char	*buf;
	int		rd;

	buf = ft_calloc(BUFFER_SIZE + 1, sizeof(*buf));
	if (!buf)
		return ;
	rd = 1;
	while (rd > 0)
	{
		rd = read(fd, buf, BUFFER_SIZE);
		if (rd == -1)
		{
			ft_free(&buf, mem, tmp);
			return ;
		}
		buf[rd] = 0;
		*tmp = ft_strdup(*mem);
		ft_free(mem, 0, 0);
		*mem = ft_strjoin(*tmp, buf);
		ft_free(tmp, 0, 0);
		if (ft_check_nl(*mem))
			break ;
	}
	ft_free(&buf, 0, 0);
}

char	*before_nl(const char *s)
{
	char	*ret;
	int		i;

	i = 0;
	while (s[i] && s[i] != '\n')
		i++;
	if (s[i] && s[i] == '\n')
		i++;
	ret = ft_calloc(i + 1, sizeof(*ret));
	if (!ret)
		return (0);
	i = 0;
	while (s[i] && s[i] != '\n')
	{
		ret[i] = s[i];
		i++;
	}
	if (s[i] && s[i] == '\n')
		ret[i] = s[i];
	return (ret);
}

char	*after_nl(const char *s)
{
	char	*ret;
	int		i;
	int		j;

	j = 0;
	while (s && s[j])
		j++;
	i = 0;
	while (s[i] && s[i] != '\n')
		i++;
	if (s[i] && s[i] == '\n')
		i++;
	ret = ft_calloc((j - i) + 1, sizeof(*ret));
	if (!ret)
		return (0);
	j = 0;
	while (s[i + j])
	{
		ret[j] = s[i + j];
		j++;
	}
	return (ret);
}

char	*ft_parser(char **mem, char **tmp)
{
	char	*line;

	*tmp = ft_strdup(*mem);
	ft_free(mem, 0, 0);
	*mem = after_nl(*tmp);
	line = before_nl(*tmp);
	ft_free(tmp, 0, 0);
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*mem[1024];
	char		*tmp;
	char		*line;

	if (fd < 0 || fd >= 1024 || BUFFER_SIZE <= 0)
		return (0);
	line = 0;
	tmp = 0;
	ft_read_nl(fd, &mem[fd], &tmp);
	if (mem[fd] && *mem[fd])
		line = ft_parser(&mem[fd], &tmp);
	if (!line || *line == 0)
	{
		ft_free(&line, &mem[fd], &tmp);
		return (0);
	}
	return (line);
}
