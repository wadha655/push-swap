/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahmed <wahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:47:23 by wahmed            #+#    #+#             */
/*   Updated: 2023/07/24 16:29:35 by wahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;

	if (*lst)
	{
		p = (ft_lstlast(*lst));
		p->next = &*new;
	}
	else
		*lst = new;
}
//  int main()
// {
//     t_list *head = NULL;
//  t_list node1, node2, node3;
//  node1.content =10;
//  node1.next = NULL;
//  node2.content = 40;
//  node2.next = NULL;
//  node3.content = 1;
//  node3.next = NULL;
//     ft_lstadd_back(&head, &node1);
//     ft_lstadd_back(&head, &node2);
// 	ft_lstadd_back(&head, &node3);
//     t_list *current = head;
//     while (current != NULL)
//     {
//         printf(" : %d -> ", current->content);
//         current = current->next;
//     }
// 	printf("\n");
//     return (0);
// }