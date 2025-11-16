/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carpadro <carpadro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:47:38 by carpadro          #+#    #+#             */
/*   Updated: 2025/10/09 17:47:38 by carpadro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sj;

	sj = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (! sj)
		return (NULL);
	ft_strlcpy(sj, s1, ft_strlen(s1) + 1);
	ft_strlcpy(&sj[ft_strlen(s1)], s2, ft_strlen(s2) + 1);
	return (sj);
}
