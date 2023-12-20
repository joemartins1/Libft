/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurant <jdurant@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:46:30 by jdurant           #+#    #+#             */
/*   Updated: 2023/11/07 05:37:51 by jdurant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    printf("%c", ft_toupper('j'));
    printf("%c", ft_toupper('S'));

    printf("%c", toupper('j'));
    printf("%c", toupper('S'));
}
*/