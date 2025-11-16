/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carpadro <carpadro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:47:08 by carpadro          #+#    #+#             */
/*   Updated: 2025/10/09 17:47:08 by carpadro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			pos;
	unsigned char	*s_str;
	unsigned char	c_str;

	pos = 0;
	s_str = (unsigned char *) s;
	c_str = (unsigned char) c;
	while (pos < n)
	{
		s_str[pos] = c_str;
		pos++;
	}
	return (s);
}
