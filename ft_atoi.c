/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurant <jdurant@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:35:25 by jdurant           #+#    #+#             */
/*   Updated: 2023/11/07 05:25:11 by jdurant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				n;
	long long int	res;
	long long int	temp;
	size_t			i;

	n = 1;
	res = 0;
	i = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if ((str[i] == '+') || (str[i] == '-'))
		if (str[i++] == '-')
			n = -n;
	while (str[i] >= '0' && str[i] <= '9')
	{
		temp = res;
		res = ((res * 10) + (str[i] - '0'));
		if (temp > res && n == -1)
			return (0);
		if (temp > res && n == 1)
			return (-1);
		i++;
	}
	return (res * n);
}
