/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahmed <wahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:58:46 by wahmed            #+#    #+#             */
/*   Updated: 2023/07/24 12:44:40 by wahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (0);
	while (lst)
	{
		if (lst->next == NULL)
		{
			return (lst);
		}
		lst = lst->next;
	}
	return (lst);
}

// int	main(void)
// {
// 	t_list	*lastNode;

// 	t_list node1, node2, node3;
// 	node1.content = 10;
// 	node1.next = &node2;
// 	node2.content = 30;
// 	node2.next = &node3;
// 	node3.content = 15;
// 	node3.next = NULL;
// 	lastNode = ft_lstlast(&node1);
// 	printf("last node  : %d\n", lastNode->content);
// 	return (0);
// }
