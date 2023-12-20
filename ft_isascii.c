/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurant <jdurant@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:45:34 by jdurant           #+#    #+#             */
/*   Updated: 2023/11/07 05:16:48 by jdurant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    printf("%d", ft_isascii('5'));
    printf("%d", ft_isascii(127));

    printf("%d", isascii('5'));
    printf("%d", isascii(127));
}
*/