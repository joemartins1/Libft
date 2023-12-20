/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurant <jdurant@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:27:06 by jdurant           #+#    #+#             */
/*   Updated: 2023/11/07 04:42:24 by jdurant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char *ft_strnstr(const char *  s1 , const char *  s2 , size_t  len )
{
	size_t    i;
    size_t    j;

    i = 0;
    j = 0;
    while (s1[i]!= '\0' && i < len)
    {
		j = 0;
        while (s1[i] == s2[j])
        {
            j++;
			i++;
        }
		i = i - j;
		if (s2[j] == '\0')
            return ((char *)&s1[i]);
		i++;
    }
    if (j == len)
        return ((char *)s1);
    return (NULL);
}*/

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	needle_len;

	needle_len = ft_strlen(s2);
	if (needle_len == 0)
		return ((char *)s1);
	while (*s1 != '\0' && len >= needle_len)
	{
		if (ft_strncmp(s1, s2, needle_len) == 0)
			return ((char *)s1);
		s1++;
		len--;
	}
	return (NULL);
}

/*
#include <stdio.h>

int main(void)
{
	printf("%s\n", ft_strnstr("hello wworld", "worl", 10));
	printf("%s\n", strnstr("hello wworld", "worl", 10));
}
*/