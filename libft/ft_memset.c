/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahmed <wahmed@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:59:10 by wahmed            #+#    #+#             */
/*   Updated: 2023/07/06 10:55:39 by wahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *str, int enc, size_t num)
{
	size_t	i;
	char	*p;

	p = (char *)str;
	i = 0;
	while (i < num)
	{
		p[i] = enc;
		i++;
	}
	return (str);
}

// int main()
//{
//	char str[] = "wadha ahmed";
//	ft_memset(str,'*',5);
//	printf("%s\n",str);
//	return (0);
//}
