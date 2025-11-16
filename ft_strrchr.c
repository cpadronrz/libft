/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carpadro <carpadro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:48:02 by carpadro          #+#    #+#             */
/*   Updated: 2025/10/09 17:48:02 by carpadro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				pos;
	int				pos_c;
	unsigned char	c_char;

	c_char = (unsigned char) c;
	pos = 0;
	pos_c = -1;
	while (s[pos])
	{
		if (s[pos] == c_char)
			pos_c = pos;
		pos ++;
	}
	if (pos_c >= 0)
		return ((char *)&s[pos_c]);
	if (c_char == '\0')
		return ((char *)&s[pos]);
	return (NULL);
}
