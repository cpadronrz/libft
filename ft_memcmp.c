/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carpadro <carpadro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:46:56 by carpadro          #+#    #+#             */
/*   Updated: 2025/10/09 17:46:56 by carpadro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				pos;
	unsigned const char	*s1_char;
	unsigned const char	*s2_char;

	pos = 0;
	s1_char = (unsigned const char *) s1;
	s2_char = (unsigned const char *) s2;
	while (pos < n)
	{
		if (s1_char[pos] != s2_char[pos])
			return (s1_char[pos] - s2_char[pos]);
		pos++;
	}
	return (0);
}
