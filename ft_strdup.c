/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carpadro <carpadro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:47:32 by carpadro          #+#    #+#             */
/*   Updated: 2025/10/09 17:47:32 by carpadro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*cpy;

	cpy = malloc(ft_strlen(s) + 1);
	if (!cpy)
		return (NULL);
	ft_strlcpy(cpy, s, ft_strlen(s) + 1);
	return (cpy);
}
