/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliog < otelliog@student.42kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:20:21 by otelliog          #+#    #+#             */
/*   Updated: 2022/06/04 17:20:22 by otelliog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	s2_length;

	if (*s2 == '\0')
		return ((char *)s1);
	s2_length = ft_strlen(s2);
	while (*s1 != '\0' && n >= s2_length)
	{
		if (*s1 == *s2 && ft_strncmp(s1, s2, s2_length) == 0)
			return ((char *)s1);
		s1++;
		n--;
	}
	return (NULL);
}
