#include "libft.h"

void	swap_single(int *a)
{
	int	buffer;

	buffer = 0;
	if (ft_strlen(a) > 1)
	{
		buffer = a[0];
		a[0] = a[1];
		a[1] = buffer;
	}
}

void	swap_both(int *a, int *b)
{
	swap_single(a);
	swap_single(b);
}

void	push(int *a, int *b)
{
	if (b)
	{
		while ()
	}
}
