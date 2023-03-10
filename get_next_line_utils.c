/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 19:01:31 by yoelansa          #+#    #+#             */
/*   Updated: 2023/01/16 17:02:47 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
// ft_strlen() whiche represent the same behavior of strlen() from string.h 
// "count the number of characters in a string"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
// ft_substr() take a sub string from a longer or equal string.

char	*ft_substr(char *s, size_t start, size_t end)
{
	char	*str;
	int		i;

	if (start > end)
		return (NULL);
	str = malloc(sizeof(char) * (end - start + 2));
	if (!str)
		return (NULL);
	i = 0;
	while (start <= end)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
// ft_strjoin() create a string from multiple strings.

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*a;

	if (!s1)
	{
		s1 = malloc(sizeof(char));
		if (!s1)
			return (NULL);
		s1[0] = '\0';
	}
	i = -1;
	j = -1;
	a = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!a)
		return (NULL);
	while (s1[++i])
		a[i] = s1[i];
	while (s2[++j])
		a[i + j] = s2[j];
	a[i + j] = '\0';
	free(s1);
	return (a);
}
