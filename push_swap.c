/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahmed <wahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:19:01 by wahmed            #+#    #+#             */
/*   Updated: 2023/11/02 15:27:07 by wahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	printlist(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp)
	{
		printf("%d - pos\n", tmp->content);
		tmp = tmp->next;
	}
}

void	printindex(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp)
	{
		printf("%d - index\n", tmp->index);
		tmp = tmp->next;
	}
}

void	sort(t_list **stackA, t_list **stackB)
{
	int	length;

	length = ft_lstsize(*stackA);
	if (length == 2)
		sort2na(stackA);
	if (length == 3)
		sort3n(stackA);
	if (length == 4)
		sort4n(stackA, stackB);
	if (length == 5)
		sort5n(stackA, stackB);
	if (length > 5)
		sort100n(stackA, stackB);
}

int	main(int ac, char **av)
{
	t_list	*stacka;
	t_list	*stackb;

	stacka = NULL;
	stackb = NULL;
	if (ac == 1)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	pars(&stacka, av);
	if (sorted(&stacka))
	{
		ft_lstclear(&stacka, free);
		exit(1);
	}
	fill_index(&stacka);
	sort(&stacka, &stackb);
	ft_lstclear(&stacka, free);
	return (0);
}
