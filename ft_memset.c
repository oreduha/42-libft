/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otelliog < otelliog@student.42kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:18:38 by otelliog          #+#    #+#             */
/*   Updated: 2022/06/04 17:18:40 by otelliog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	void	*s_address;

	s_address = s;
	while (0 < n)
	{
		*(unsigned char *)s = (unsigned char)c;
		s++;
		n--;
	}
	return (s_address);
}
