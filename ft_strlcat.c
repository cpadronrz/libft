/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carpadro <carpadro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:47:41 by carpadro          #+#    #+#             */
/*   Updated: 2025/10/09 17:47:41 by carpadro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	pos;
	size_t	len_d;
	size_t	len_s;

	len_s = ft_strlen(src);
	len_d = ft_strlen(dst);
	if (len_d >= size)
		return (size + len_s);
	pos = 0;
	while (pos < size - len_d - 1 && src[pos])
	{
		dst[len_d + pos] = src[pos];
		pos ++;
	}
	dst[len_d + pos] = '\0';
	return (len_d + len_s);
}
