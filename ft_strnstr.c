/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carpadro <carpadro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:47:59 by carpadro          #+#    #+#             */
/*   Updated: 2025/10/09 17:47:59 by carpadro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	pos_b;
	size_t	pos_l;

	pos_b = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (pos_b < len && big[pos_b])
	{
		pos_l = 0;
		if (big[pos_b] == little[pos_l])
		{
			while (big[pos_b + pos_l] == little[pos_l] && little[pos_l]
				&& (pos_b + pos_l < len))
				pos_l ++;
		}
		if (little[pos_l] == '\0')
			return ((char *)&big[pos_b]);
		pos_b++;
	}
	return (NULL);
}
