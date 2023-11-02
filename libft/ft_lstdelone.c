/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahmed <wahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:54:26 by wahmed            #+#    #+#             */
/*   Updated: 2023/11/01 18:16:04 by wahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!del || !lst)
		return ;
	(del)(&lst->content);
	(del)(&lst->index);
	free(lst);
}

// void	del_int(void *content)
// {
// }

// int	main(void)
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;

// 	node1 = (t_list *)malloc(sizeof(t_list));
// 	node2 = (t_list *)malloc(sizeof(t_list));
// 	node3 = (t_list *)malloc(sizeof(t_list));
// 	node1->content = 10;
// 	node1->next = node2;
// 	node2->content = 20;
// 	node2->next = node3;
// 	node3->content = 30;
// 	node3->next = NULL;
// 	printf("orginal list : %d -> %d -> %d\n", node1->content, node2->content,
// 		node3->content);
// 	ft_lstdelone(node2, del_int);
// 	printf("list after : %d -> %d\n", node1->content, node3->content);
// 	free(node1);
// 	free(node3);
// 	return (0);
// }