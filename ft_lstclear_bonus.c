/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carpadro <carpadro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:46:26 by carpadro          #+#    #+#             */
/*   Updated: 2025/10/09 17:46:26 by carpadro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*head;
	t_list	*next;

	if (lst)
	{
		head = *lst;
		while (head != NULL)
		{
			next = head -> next;
			ft_lstdelone(head, del);
			head = next;
		}
		*lst = NULL;
	}
}
