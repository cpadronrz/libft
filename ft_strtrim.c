/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carpadro <carpadro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:48:05 by carpadro          #+#    #+#             */
/*   Updated: 2025/10/09 17:48:05 by carpadro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_inset(char c, char const *set)
{
	size_t	pos;

	pos = 0;
	while (set[pos])
	{
		if (set[pos] == c)
			return (1);
		pos ++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	start;
	size_t	end;

	if (set == NULL)
		return ((char *)s1);
	if (s1 == NULL)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_inset(s1[start], set) == 1)
		start++;
	while (s1[end] && ft_inset(s1[end], set) == 1 && end > start)
		end --;
	end ++;
	res = malloc((end - start + 1) * sizeof(char));
	if (!res)
		return (NULL);
	ft_strlcpy(res, &s1[start], end - start + 1);
	return (res);
}
