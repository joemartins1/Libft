/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurant <jdurant@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:10:10 by jdurant           #+#    #+#             */
/*   Updated: 2023/11/07 05:33:21 by jdurant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free_malloc(char **strs, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

static int	ft_len(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && (s[i] == c))
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != '\0' && !(s[i] == c))
			i++;
	}
	return (count);
}

static int	ft_sep_len(char *s, char c)
{
	int	l;

	l = 0;
	while (s[l] != '\0' && !(s[l] == c))
		l++;
	return (l);
}

static char	*ft_get(char *s, char c)
{
	int		i;
	int		l;
	char	*out;

	i = 0;
	l = ft_sep_len(s, c);
	out = malloc(sizeof(char) * (l + 1));
	if (!out)
		return (NULL);
	while (i < l)
	{
		out[i] = s[i];
		i++;
	}
	out[i] = '\0';
	return (out);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**strings;

	if (!s)
		return (NULL);
	i = 0;
	strings = (char **)malloc (sizeof(s) * (ft_len((char *)(s), c) + 1));
	if (!strings)
		return (NULL);
	while (*s != '\0')
	{
		while (*s != '\0' && (*s == c))
			s++;
		if (*s != '\0')
		{
			strings[i] = ft_get((char *)(s), c);
			if (strings[i] == NULL)
				return (ft_free_malloc(strings, i));
			i++;
		}
		while (*s && !(*s == c))
			s++;
	}
	strings[i] = 0;
	return (strings);
}

/*
int main()
{
	char *str = "Bonjour,monde,exemple";
    char **result = ft_split(str, ',');

    if (result)
    {
        for (int i = 0; result[i]!= NULL; i++)
        {
            printf("%s\n", result[i]);
            free(result[i]);
        }
        free(result);
    }
    else
    {
        printf("Allocation mémoire a échoué.\n");
    }
    return (0);
}
*/
