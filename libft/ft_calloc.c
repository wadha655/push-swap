/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahmed <wahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 14:43:36 by wahmed            #+#    #+#             */
/*   Updated: 2023/11/02 11:18:06 by wahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if ((size != 0) && (count > (UINT32_MAX / size)))
		return (NULL);
	ptr = malloc(count * size);
	if (ptr != NULL)
	{
		ft_memset(ptr, 0, count * size);
	}
	return (ptr);
}
