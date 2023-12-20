/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurant <jdurant@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:46:24 by jdurant           #+#    #+#             */
/*   Updated: 2023/11/07 05:38:28 by jdurant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	total_size;
	char			*sub;

	if (!s)
		return ((char *)0);
	total_size = 0;
	if (start > (unsigned int)ft_strlen((char *)s))
	{
		sub = malloc(sizeof(char));
		if (!sub)
			return ((char *)0);
		sub[0] = '\0';
		return (sub);
	}
	s += start;
	while (s[total_size] && len--)
		total_size++;
	sub = malloc((total_size + 1) * sizeof(char));
	if (!sub)
		return ((char *)0);
	ft_strlcpy(sub, s, total_size + 1);
	return (sub);
}
