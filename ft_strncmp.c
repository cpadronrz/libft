/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carpadro <carpadro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:47:55 by carpadro          #+#    #+#             */
/*   Updated: 2025/10/09 17:47:55 by carpadro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	pos;

	pos = 0;
	while ((s1[pos] || s2[pos]) && pos < n)
	{
		if (s1[pos] != s2[pos])
			return ((unsigned char)s1[pos] - (unsigned char)s2[pos]);
		pos ++;
	}
	return (0);
}
