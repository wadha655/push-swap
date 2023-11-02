/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahmed <wahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:49:16 by wahmed            #+#    #+#             */
/*   Updated: 2023/07/24 16:22:30 by wahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst || new)
	{
		new->next = *lst;
		*lst = new;
	}
}
// int	main(void)
// {
// 	t_list *head = NULL;
// 	t_list node1, node2, node3;

// 	node1.content = 7;
// 	node1.next = NULL;

// 	node2.content = 15;
// 	node2.next = NULL;

// 	ft_lstadd_front(&head, &node1);
// 	ft_lstadd_front(&head, &node2);
// 	t_list *current = head;
// 	while (current != NULL)
// 	{
// 		printf("%d -> ", current->content);
// 		current = current->next;
// 	}
// 	printf("\n");
// 	return (0);
// }
