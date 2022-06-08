/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliog < otelliog@student.42kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:20:09 by otelliog          #+#    #+#             */
/*   Updated: 2022/06/04 17:20:11 by otelliog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*temp;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	temp = (char *)malloc(ft_strlen(s) + 1);
	if (temp == NULL)
		return (NULL);
	i = 0;
	while (*(s + i) != '\0')
	{
		*(temp + i) = f(i, *(s + i));
		i++;
	}
	*(temp + i) = '\0';
	return (temp);
}
