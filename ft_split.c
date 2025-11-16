/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carpadro <carpadro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:47:25 by carpadro          #+#    #+#             */
/*   Updated: 2025/10/09 17:47:25 by carpadro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countrow(char *s, char c)
{
	int	pos;
	int	count;

	pos = 0;
	count = 0;
	while (s[pos])
	{
		if (pos != 0 && s[pos] == c && s[pos - 1] != c)
			count++;
		pos ++;
	}
	if (pos != 0 && s[pos - 1] != c)
		count ++;
	return (count);
}

static void	*ft_free_arr(char **arr, int row)
{
	while (row >= 0)
	{
		free(arr[row]);
		row --;
	}
	free(arr);
	return (NULL);
}

static int	ft_reserve_memory(const char *s, char **arr, char c, int row)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len ++;
	arr[row] = malloc((len + 1) * sizeof(char));
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		row;
	int		nrow;
	int		len;

	row = 0;
	nrow = ft_countrow((char *) s, c);
	arr = malloc((nrow + 1) * sizeof(char *));
	if (! arr)
		return (NULL);
	while (row < nrow)
	{
		while (*s == c)
			s ++;
		len = ft_reserve_memory(s, arr, c, row);
		if (!arr[row])
			return (ft_free_arr(arr, row - 1));
		ft_strlcpy(arr[row], s, len + 1);
		s += len;
		row ++;
	}
	arr[row] = NULL;
	return (arr);
}
