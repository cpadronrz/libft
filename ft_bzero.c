/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carpadro <carpadro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:45:44 by carpadro          #+#    #+#             */
/*   Updated: 2025/10/09 17:45:44 by carpadro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			pos;
	unsigned char	*s_str;

	pos = 0;
	s_str = (unsigned char *)s;
	while (pos < n)
	{
		s_str[pos] = '\0';
		pos ++;
	}
}
