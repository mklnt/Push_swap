#include "libft.h"

int	check(int *a)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < ft_strlen(a))
	{
		if (a[i] < '0' || a[i] > '9')
			return (0);
		while (j < i)
		{
			if (a[i] == a[j])
				return (0);
		}
		j = 0;
		i ++;
	}
}
