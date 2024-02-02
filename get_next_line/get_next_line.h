/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <roylee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:26:31 by roylee            #+#    #+#             */
/*   Updated: 2024/01/20 18:09:50 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

# include <fcntl.h>
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

// GNL
char	*get_next_line(int fd);
void	ft_read_nl(int fd, char **mem, char **tmp);
char	*ft_parser(char **mem, char **tmp);

// UTILS
void	ft_free(char **s1, char **s2, char **s3);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strjoin(const char *s1, const char *s2);
int		ft_check_nl(const char *s);
char	*ft_strdup(const char *s);

#endif
