/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurant <jdurant@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:45:55 by jdurant           #+#    #+#             */
/*   Updated: 2023/10/25 14:45:55 by jdurant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*pdest;
	char	*psrc;

	i = -1;
	pdest = (char *)dest;
	psrc = (char *)src;
	if (pdest > psrc)
	{
		while ((int)(--n) >= 0)
		{
			*(pdest + n) = *(psrc + n);
		}
	}
	else
	{
		while (++i < n && (dest != 0 || src != 0))
			*(pdest + i) = *(psrc + i);
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello, World!";
    char str2[20];
    char str3[20];
    char str4[] = "OpenAI";

    // Testing with overlapping memory
    printf("Original str1: %s\n", str1);
    ft_memmove(str1 + 7, str1, 7);
    printf("After ft_memmove: %s\n", str1);

    // Testing when src comes after dst
    strcpy(str2, "Destination");
    printf("Original str2: %s\n", str2);
    ft_memmove(str2 + 4, str2, 11);
    printf("After ft_memmove: %s\n", str2);

    // Testing when src comes before dst
    strcpy(str3, "This is a test.");
    printf("Original str3: %s\n", str3);
    ft_memmove(str3, str3 + 5, 9);
    printf("After ft_memmove: %s\n", str3);

    // Testing with non-overlapping memory
    printf("Original str4: %s\n", str4);
    ft_memmove(str4, "Awesome", 7);
    printf("After ft_memmove: %s\n", str4);

    return 0;
}
*/