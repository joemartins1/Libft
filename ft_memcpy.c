/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurant <jdurant@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:45:51 by jdurant           #+#    #+#             */
/*   Updated: 2023/11/07 05:36:05 by jdurant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*ptrsrc;
	char	*ptrdest;

	ptrsrc = (char *) src;
	ptrdest = (char *) dest;
	while (n > 0 && (dest != 0 || src != 0))
	{
		ptrdest[n - 1] = ptrsrc[n - 1];
		n--;
	}
	return (dest);
}

/*
#include <stdio.h>

int main() {
    // Créez des données source et de destination
    char src[] = "Hello, World!";
    char dest[20];

    // Affiche la source avant la copie
    printf("Source avant copie: %s\n", src);

    // Utilisez la fonction memcpy pour copier les données de src vers dest
    ft_memcpy(dest, src, sizeof(src));

    // Affiche la destination après la copie
    printf("Destination après copie: %s\n", dest);

    return 0;
}
*/