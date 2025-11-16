/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carpadro <carpadro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:46:14 by carpadro          #+#    #+#             */
/*   Updated: 2025/10/09 17:46:14 by carpadro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbr_len(int n)
{
	int	len;

	len = 1;
	if (n / 10 != 0)
		len += ft_nbr_len(n / 10);
	return (len);
}

static int	ft_reserve_memory(int n)
{
	int	len;

	if (n == -2147483648)
		len = 11;
	else
	{
		if (n < 0)
			len = 1 + ft_nbr_len(-n);
		else
			len = ft_nbr_len(n);
	}
	return (len);
}

static void	ft_fill_arr(int n, char *arr, int len)
{
	if (n == -2147483648)
		ft_strlcpy(arr, "-2147483648", 12);
	else
	{
		if (n < 0)
		{
			arr[0] = '-';
			n = -n;
			while (--len > 0)
			{
				arr[len] = n % 10 + '0';
				n = n / 10;
			}
		}
		else
		{
			while (--len >= 0)
			{
				arr[len] = n % 10 + '0';
				n = n / 10;
			}
		}
	}
}

char	*ft_itoa(int n)
{
	char	*arr;
	int		len;

	len = ft_reserve_memory(n);
	arr = malloc((len + 1) * sizeof(char));
	if (!arr)
		return (NULL);
	ft_fill_arr(n, arr, len);
	arr[len] = '\0';
	return (arr);
}
