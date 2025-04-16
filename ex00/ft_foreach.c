#include <stdio.h>

void	power(int n)
{
	n = n * n;
	printf("%d ", n);
	printf("\n");
}

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

int	main(void)
{
	int	arr[20];
	int	i;

	i = 1;
	while (i < 20)
	{
		arr[i] = i;
		i++;
	}
	for (i = 0; i < 20; i++)
		printf("%d ", arr[i]);
	printf("\n");
	ft_foreach(arr, 20, power);
	return (0);
}
