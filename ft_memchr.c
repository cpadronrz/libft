/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carpadro <carpadro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:46:53 by carpadro          #+#    #+#             */
/*   Updated: 2025/10/09 17:46:53 by carpadro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*s_char;
	unsigned char		c_char;
	size_t				pos;

	s_char = (unsigned const char *) s;
	c_char = (unsigned char) c;
	pos = 0;
	while (pos < n)
	{
		if (s_char[pos] == c_char)
			return ((void *)&s_char[pos]);
		pos ++;
	}
	return (NULL);
}
