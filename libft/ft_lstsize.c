/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahmed <wahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 18:02:42 by wahmed            #+#    #+#             */
/*   Updated: 2023/07/23 18:03:21 by wahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
// int	main(void)
// {
// 	// Initialize an empty linked list
// 	t_list node1, node2, node3;
// 	// Assign data to each node
// 	node1.content = 5;
// 	node2.content = 8;
// 	node3.content = 1;

// 	// Link the nodes
// 	node1.next = &node2;
// 	node2.next = &node3;
// 	node3.next = NULL;

// 	// Set the head pointer
// 	t_list *head = &node1;
// 	// Call ft_lstsize to get the size of the linked list
// 	int size = ft_lstsize(head);
// 	// Print the size of the linked list
// 	printf("Linked List size: %d\n", size);
// }