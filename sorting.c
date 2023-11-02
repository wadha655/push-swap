/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahmed <wahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:42:14 by wahmed            #+#    #+#             */
/*   Updated: 2023/11/02 17:27:45 by wahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort2na(t_list **stackA)
{
	t_list	*node;
	int		n1;
	int		n2;

	node = *stackA;
	n1 = node->content;
	n2 = node->next->content;
	if (n1 > n2)
		sa(stackA);
}

void	sort3n(t_list **stackA)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = (*stackA)->content;
	n2 = (*stackA)->next->content;
	n3 = (*stackA)->next->next->content;
	if ((n1 < n2) && (n2 < n3) && (n1 < n3))
		return ;
	if ((n1 > n2) && (n2 < n3) && (n1 < n3))
		sa(stackA);
	else if ((n1 > n2) && (n2 > n3) && (n1 > n3))
	{
		sa(stackA);
		rra(stackA);
	}
	else if ((n1 < n2) && (n2 > n3) && (n1 > n3))
		rra(stackA);
	else if ((n1 < n2) && (n2 > n3) && (n1 < n3))
	{
		sa(stackA);
		ra(stackA);
	}
	else if ((n1 > n2) && (n2 < n3) && (n1 > n3))
		ra(stackA);
}

void	sort4n(t_list **stackA, t_list **stackB)
{
	int	min;

	min = find_min(stackA);
	while ((*stackA)->content != min)
	{
		ra(stackA);
	}
	pb(stackA, stackB);
	sort3n(stackA);
	pa(stackB, stackA);
}

void	sort5n(t_list **stackA, t_list **stackB)
{
	int	min;

	min = find_min(stackA);
	while ((*stackA)->content != min)
	{
		if (find_length_min(stackA) > ft_lstsize(*stackA) / 2)
			rra(stackA);
		else
			ra(stackA);
	}
	pb(stackA, stackB);
	min = find_min(stackA);
	while ((*stackA)->content != min)
	{
		if (find_length_min(stackA) > (ft_lstsize(*stackA) / 2))
			rra(stackA);
		else
			ra(stackA);
	}
	pb(stackA, stackB);
	sort3n(stackA);
	pa(stackB, stackA);
	pa(stackB, stackA);
}
