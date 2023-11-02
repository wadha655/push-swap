/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahmed <wahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 10:17:03 by wahmed            #+#    #+#             */
/*   Updated: 2023/07/19 11:46:18 by wahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if ((char)c == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}

// char	*ft_strchr(const char *s, int c)
// {
// 	if(c > 127)
// 		return((char *)s);
// 	if ((char)c == '\0')
// 	{
// 		return ((char *)s);
// 	}
// 	while (*s != c)
// 	{
// 		if (*s != '\0')
// 		{
// 			s++;
// 		}
// 		else{
// 	return (NULL);
// 	}
// 	}
// 		return ((char *)s);
// }

// int main()
// {
// 	const char * s = "hello wadha";
// 	int c = "p";
// 	char* res = ft_strchr(s,c);
// 	printf("%s\n",res);
// 	res = strchr(s,c);
// 	printf("%s\n",res);
// 	return(0);
// }
