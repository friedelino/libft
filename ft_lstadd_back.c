/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaurer <fmaurer42@posteo.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 19:58:57 by fmaurer           #+#    #+#             */
/*   Updated: 2024/06/17 17:48:26 by fmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 2nd if: empty list given as NULL
// always ensuring that newend->next == NULL
// ...francinette did not like it.. but moulinette does. so i keep it.
void	ft_lstadd_back(t_list **head, t_list *newend)
{
	t_list	*oldlast;

	if (!newend)
		return ;
	if (!*head)
	{
		*head = newend;
		newend->next = NULL;
		return ;
	}
	oldlast = ft_lstlast(*head);
	oldlast->next = newend;
	newend->next = NULL;
}
