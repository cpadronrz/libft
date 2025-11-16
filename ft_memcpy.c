/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carpadro <carpadro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:47:00 by carpadro          #+#    #+#             */
/*   Updated: 2025/10/09 17:47:00 by carpadro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				pos;
	unsigned char		*dest_s;
	const unsigned char	*src_s;

	pos = 0;
	dest_s = (unsigned char *) dest;
	src_s = (const unsigned char *) src;
	while (pos < n)
	{
		dest_s[pos] = src_s[pos];
		pos ++;
	}
	return (dest);
}
