#include "libft.h"

float compute_disorder(stack a)
{
	int	mistakes;
	int	pairs;
	int	size_stack;
	int	i;
	int	j;

	i = 0;
	j = 0;
	mistakes = 0;
	pairs = 0;
	size_stack = ft_strlen(a);
	while (i < size_stack)
	{
		j = i + 1;
		while (j < size_stack)
		{
			pairs += 1;
			if (a[i] < a[j])
				mistakes += 1;
			j++;
		}
		i++;
	}

	return (mistakes / pairs);
}
