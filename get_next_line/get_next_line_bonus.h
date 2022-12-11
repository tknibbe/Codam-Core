/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tknibbe <tknibbe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:14:06 by tknibbe           #+#    #+#             */
/*   Updated: 2022/12/11 13:01:26 by tknibbe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <limits.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

//get_next_line.c
char	*get_next_line(int fd);
char	*get_buffer(int fd, char *buffer);
char	*filter_line(char *buffer);
char	*get_new_buffer(char *buffer);
//get_next_line_utils
char	*ft_strchr(const char *s, int c);
char	*ft_calloc(size_t count, size_t size);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_strlen(const char *s);
char	*free_and_join(char *buffer, char *read_line);
#endif