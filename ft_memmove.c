/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carpadro <carpadro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:47:03 by carpadro          #+#    #+#             */
/*   Updated: 2025/10/09 17:47:03 by carpadro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_s;
	const unsigned char	*src_s;
	size_t				pos;

	dest_s = (unsigned char *) dest;
	src_s = (const unsigned char *) src;
	pos = 0;
	if (dest_s < src_s)
	{
		while (pos < n)
		{
			dest_s[pos] = src_s[pos];
			pos ++;
		}
	}
	else if (dest_s > src_s)
	{
		while (pos < n)
		{
			dest_s[n - 1 - pos] = src_s[n - 1 - pos];
			pos ++;
		}
	}
	return (dest);
}
