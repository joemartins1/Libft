/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurant <jdurant@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:45:19 by jdurant           #+#    #+#             */
/*   Updated: 2023/11/07 05:20:58 by jdurant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	ptr = (char *) s;
	while (n > 0)
	{
		ptr[n - 1] = 0;
		n--;
	}
}

/*
int main() {
    char myString[] = "Hello, World!";
    size_t length = 5;

    printf("Original String: %s\n", myString);

    // Utilisation de ft_bzero pour effacer la chaîne
    ft_bzero(myString, length);

    printf("String After ft_bzero: %s\n", myString);

    return 0;
}
*/
