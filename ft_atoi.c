/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carpadro <carpadro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:45:37 by carpadro          #+#    #+#             */
/*   Updated: 2025/10/09 17:45:37 by carpadro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	pos;
	int		res;
	int		sign;

	pos = 0;
	sign = 1;
	res = 0;
	while ((nptr[pos] >= 9 && nptr[pos] <= 13) || nptr[pos] == 32)
		pos++;
	if (nptr[pos] == '+')
		pos++;
	else if (nptr[pos] == '-')
	{
		sign = -1;
		pos++;
	}
	while (ft_isdigit(nptr[pos]) == 1)
	{
		res = res * 10 + (nptr[pos] - '0');
		pos ++;
	}
	return (res * sign);
}
