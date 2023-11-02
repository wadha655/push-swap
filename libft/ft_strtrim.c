/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahmed <wahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 10:14:49 by wahmed            #+#    #+#             */
/*   Updated: 2023/07/15 12:31:02 by wahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	len;
	char	*str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		start = 0;
		len = ft_strlen(s1);
		while (s1[start] && ft_strchr(set, s1[start]))
			start++;
		while (s1[len - 1] && ft_strchr(set, s1[len - 1]) && len > start)
			len--;
		str = (char *)malloc(sizeof(char) * (len - start + 1));
		if (str)
			ft_strlcpy(str, &s1[start], len - start + 1);
	}
	return (str);
}

// int main() {

//    const char *s1 = "    Hello, World! ";

//    const char *set = " ";

//    char *res = ft_strtrim(s1, set);

//        printf("Trimmed String: '%s'\n", res);

//        free(res);
//    return (0);

// }