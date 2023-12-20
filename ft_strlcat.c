/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurant <jdurant@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:46:07 by jdurant           #+#    #+#             */
/*   Updated: 2023/11/07 04:45:52 by jdurant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;

	j = 0;
	dest_len = ft_strlen(dest);
	i = dest_len;
	while ((i < (size - 1)) && (src[j] != '\0') && (size != 0))
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	if ((size < 3) && (src[0] == '\0'))
		return (size);
	if (size < i)
		return (ft_strlen(src) + size);
	return (dest_len + ft_strlen(src));
}
