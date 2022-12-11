/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tknibbe <tknibbe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:10:47 by tknibbe           #+#    #+#             */
/*   Updated: 2022/12/11 17:31:20 by tknibbe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != (char) c)
		i++;
	if (s[i] == (char) c)
		return ((char *)&s[i]);
	return (0);
}

char	*ft_calloc(size_t count, size_t size)
{
	char	*c;
	int		i;

	i = (count * size - 1);
	c = malloc(count * size);
	if (c == NULL)
		return (NULL);
	while (i >= 0)
	{
		c[i] = '\0';
		i--;
	}
	return (c);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*temp;
	int		len1;
	int		len2;
	int		i;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i = 0;
	temp = malloc(sizeof(char) * (len1 + len2 + 1));
	if (temp == 0)
		return (NULL);
	while (i < len1)
	{
		temp[i] = s1[i];
		i++;
	}
	while (i < (len1 + len2))
	{
		temp[i] = s2[i - len1];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*free_and_join(char *buffer, char *read_line)
{
	char	*new_buffer;

	new_buffer = ft_strjoin(buffer, read_line);
	free (buffer);
	free (read_line);
	if (new_buffer == 0)
		return (0);
	return (new_buffer);
}
