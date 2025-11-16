/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carpadro <carpadro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:47:28 by carpadro          #+#    #+#             */
/*   Updated: 2025/10/09 17:47:28 by carpadro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				pos;
	unsigned char	c_char;

	c_char = (unsigned char) c;
	pos = 0;
	while (s[pos])
	{
		if (s[pos] == c_char)
			return ((char *)&s[pos]);
		pos ++;
	}
	if (c_char == '\0')
		return ((char *)&s[pos]);
	return (NULL);
}
