/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahmed <wahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:34:59 by wahmed            #+#    #+#             */
/*   Updated: 2023/11/02 17:27:53 by wahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>
# include <stdlib.h>

void	sa(t_list **stackA);
void	pb(t_list **stackA, t_list **stackB);
void	ra(t_list **stackA);
void	rra(t_list **stackA);
void	sb(t_list **stackB);
void	pa(t_list **stackB, t_list **stackA);
void	rb(t_list **stackB);
void	rrb(t_list **stackB);
void	sort2na(t_list **stackA);
void	sort3n(t_list **stackA);
void	sort4n(t_list **stackA, t_list **stackB);
void	sort5n(t_list **stackA, t_list **stackB);
int		find_min(t_list **stackA);
int		find_min_index(t_list **stackA);
int		find_max(t_list **stackA);
int		find_max_index(t_list **stackA);
int		find_length_min(t_list **stackB);
int		find_length_index(t_list **stackA, int index);
void	fill_index(t_list **stackA);
int		sorted(t_list **stackA);
void	pback(t_list **stackA, t_list **stackB);
int		cheak_its_swap(t_list **stackB);
void	free_2d(char **x);
void	exit_any(t_list **stackA, char *s, char **x);
void	error_exit(char *arg_str);
char	*join_everthing(char **av);
void	check_double_sign(char *arg_str);
void	pars_help(t_list **stackA, char *arg_str, char **x);
int		pars(t_list **stackA, char **av);
void	printlist(t_list *lst);
void	printindex(t_list *lst);
void	sort(t_list **stackA, t_list **stackB);
void	sort100n(t_list **stackA, t_list **stackB);
void	cheak_doubls(t_list **stackA);
int		ft_chunks(t_list **stackA);

#endif
