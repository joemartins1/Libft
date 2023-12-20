#include "libft.h"

static int	len(long nb)
{
	if (nb < 10 && nb >= 0)
		return (1);
	if (nb < 0 && nb > -10)
		return (2);
	return (len(nb / 10) + 1);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int	i;

	nb = n;
	i = len(nb);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		str[i] = 48 + (nb % 10);
		nb /= 10;
		i--;
	}
	return (str);
}
