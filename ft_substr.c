/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carpadro <carpadro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:48:10 by carpadro          #+#    #+#             */
/*   Updated: 2025/10/09 17:48:10 by carpadro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
	{
		subs = malloc(sizeof(char));
		if (!subs)
			return (NULL);
		subs[0] = '\0';
		return (subs);
	}
	else if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	subs = malloc((len + 1) * sizeof(char));
	if (!subs)
		return (NULL);
	ft_strlcpy(subs, &s[start], len + 1);
	return (subs);
}
