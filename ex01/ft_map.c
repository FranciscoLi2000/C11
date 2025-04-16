#include <stdio.h>
#include <stdlib.h>

int	multi_2(int n)
{
	return (n * 2);
}

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*result;

	result = (int *)malloc(length * sizeof(int));
	i = 0;
	while (i < length)
	{
		result[i] = f(tab[i]);
		i++;
	}
	return (result);
}

int	main(void)
{
	int	arr[20];
	int	*res;
	int	i;

	i = 0;
	while (i < 20)
	{
		arr[i] = i;
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	res = ft_map(arr, 20, multi_2);
	i = 0;
	while (i < 20)
	{
		printf("%d ", res[i]);
		i++;
	}
	free(res);
	printf("\n");
	return (0);
}
