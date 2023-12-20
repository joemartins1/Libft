/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurant <jdurant@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:46:27 by jdurant           #+#    #+#             */
/*   Updated: 2023/11/07 05:29:11 by jdurant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    printf("%c", ft_tolower('J'));
    printf("%c", ft_tolower('S'));

    printf("%c", tolower('J'));
    printf("%c", tolower('S'));
}
*/
