/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurant <jdurant@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:46:17 by jdurant           #+#    #+#             */
/*   Updated: 2023/10/25 14:46:18 by jdurant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((i < n) && ((s1[i] != '\0') || (s2[i] != '\0')))
	{
		if ((unsigned char)(s1[i]) > (unsigned char)(s2[i]))
			return (1);
		else if ((unsigned char)(s1[i]) < (unsigned char)(s2[i]))
			return (-1);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
	printf("%d", ft_strncmp("Hello", "Hallo", 3));
	printf("%d", strncmp("Hello", "Hallo", 3));
}
*/
