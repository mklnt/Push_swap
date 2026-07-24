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
	int	i;

	exp = 1;
	i = 0;
	convert_array(arr_a);
	max = get_max(arr_a);
	while (max / exp != 0)
	{
		while (arr_a[i] != '\0')
		{
			if ((arr_a[i] / exp) % 1 = 1)
				pb;
				rb;
			i++;
		}
		while (arr_b)
		{
			pa;
			ra;
		}
		exp *= 10;
	}
	revert_binary(arr_a);//and viceversa
}
