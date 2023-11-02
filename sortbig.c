/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortbig.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahmed <wahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:25:17 by wahmed            #+#    #+#             */
/*   Updated: 2023/11/02 14:44:49 by wahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort100n(t_list **stackA, t_list **stackB)
{
	int		chnk;
	int		i;
	t_list	*a;

	i = 0;
	chnk = ft_chunks(stackA);
	a = *(stackA);
	while (ft_lstsize(*stackA) > 0 && a != NULL)
	{
		if (a->index >= chnk * i && a->index <= (chnk * (i + 1)))
		{
			pb(stackA, stackB);
		}
		else
			ra(stackA);
		if (ft_lstsize(*stackB) == chnk * (i + 1))
			i++;
		a = *stackA;
	}
	pback(stackA, stackB);
}

void	cheak_doubls(t_list **stackA)
{
	t_list	*node;
	t_list	*temp_node;

	node = *stackA;
	temp_node = *stackA;
	while (temp_node != NULL)
	{
		node = temp_node->next;
		while (node != NULL)
		{
			if (temp_node->content == node->content)
			{
				ft_lstclear(stackA, free);
				write(2, "Error\n", 6);
				exit(0);
			}
			node = node->next;
		}
		temp_node = temp_node->next;
	}
}

int	ft_chunks(t_list **stackA)
{
	int	chnk;

	if (ft_lstsize(*stackA) <= 150)
		chnk = 15;
	else
		chnk = 35;
	return (chnk);
}
