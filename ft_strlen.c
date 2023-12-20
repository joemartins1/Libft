/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurant <jdurant@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:46:14 by jdurant           #+#    #+#             */
/*   Updated: 2023/11/07 04:44:31 by jdurant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
    printf("%lu", ft_strlen("Salut l'ami"));
    printf("%lu", ft_strlen("Hello World !"));

    printf("%lu", strlen("Salut l'ami"));
    printf("%lu", strlen("Hello World !"));
}
*/