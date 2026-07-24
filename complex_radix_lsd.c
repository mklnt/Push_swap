void	convert_array(int *arr_a)
{
	int	i;

	i = 0;
	while(arr[i] != '\0')
	{	
		arr_a[1] = convert_binary(arr[1]); // we need a simple function to convert a decimal into binary
		i ++;
	}	
}

void	lsd(int *arr_a, int **arr_b)
{
	int	exp;
	int	max;

	exp = 1;
	convert_array(arr_a);
	max = get_max(arr_a);
	while (max / exp != 0)
	{
		while (arr_a)
		{
			if ((arr_a[0] / exp) % 1 = 0)
				rb;
				pb;
				rrb
			else
			{
				pb;
				rb;
			}
		}
		while (arr_b)
		{
			if ((arr_b[0] / exp ) % 1 = 0)
				ra;
				pa;
				rra;
			else
			{
				pa;
				ra;
			}
		}
		exp *= 10;
	}
	if (!arr_a)
		while (arr_b)
		{
			pa;
			ra;
		}
	revert_binary(arr_a);//and viceversa
}
