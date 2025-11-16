/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carpadro <carpadro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:46:33 by carpadro          #+#    #+#             */
/*   Updated: 2025/10/09 17:46:33 by carpadro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*head;

	if (lst)
	{
		if (f)
		{
			head = lst;
			while (head != NULL)
			{
				f(head -> content);
				head = head -> next;
			}
		}
	}
}
