/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carpadro <carpadro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:47:45 by carpadro          #+#    #+#             */
/*   Updated: 2025/10/09 17:47:45 by carpadro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	pos;

	pos = 0;
	if (size != 0)
	{
		while (src[pos] && pos < size - 1)
		{
			dst[pos] = src[pos];
			pos ++;
		}
		dst[pos] = '\0';
	}
	while (src[pos])
		pos++;
	return (pos);
}
