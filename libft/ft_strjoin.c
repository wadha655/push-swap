/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahmed <wahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 14:04:05 by wahmed            #+#    #+#             */
/*   Updated: 2023/07/14 16:53:25 by wahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	len1;
	size_t	len2;
	size_t	tl;

	if (s1 && s2)
	{
		len1 = ft_strlen(s1);
		len2 = ft_strlen(s2);
		tl = len1 + len2;
		res = (char *)malloc(sizeof(char) * (tl + 1));
		if (res == NULL)
		{
			return (NULL);
		}
		ft_strlcpy(res, s1, tl + 1);
		ft_strlcat(res, s2, tl + 1);
		return (res);
	}
	return (NULL);
}

// int main()
// {
// 	const char *s1 = "wadha";
// 	const char *s2 = "Abdullah";
// 	char *joins= ft_strjoin(s1,s2);
// 	printf("%s\n", joins);
// 	free(joins);
// }
