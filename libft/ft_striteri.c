/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahmed <wahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 09:53:48 by wahmed            #+#    #+#             */
/*   Updated: 2023/07/16 10:26:03 by wahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
	{
		return ;
	}
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

// void	ich(unsigned int index, char *c)
// {

// 	printf("Index : %u, char : %c\n",index,*c);
// }

// int main()
// {
// 	char	s[] = "Hello Wdha";
// 	ft_striteri(s,ich);
// 	return (0);
// }
