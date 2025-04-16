#include <stdio.h>

int	is_sorted(int x, int y)
{
	if (x <= y)
		return (1);
	return (0);
}

int	ft_is_sorted(int *tab, int length, int(*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if (!f(tab[i], tab[i + 1]))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	int arr[] = {4, 9, 3, 2, 1};

	if (ft_is_sorted(arr, 5, is_sorted))
		printf("The numeric array is sorted.\n");
	else
		printf("The numeric array is NOT sorted.\n");
	return (0);
}
