/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carpadro <carpadro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:47:52 by carpadro          #+#    #+#             */
/*   Updated: 2025/10/09 17:47:52 by carpadro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		pos;

	str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (! str)
		return (NULL);
	pos = 0;
	while (s[pos])
	{
		str[pos] = f(pos, s[pos]);
		pos ++;
	}
	str[pos] = '\0';
	return (str);
}
