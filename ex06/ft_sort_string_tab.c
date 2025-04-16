#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	ft_sort_string_tab(char **tab)
{
	char	*tmp;
	int	i;
	int	j;
	int	size;

	size = 0;
	while (tab[size] != NULL)
		size++;
	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (strcmp(tab[j], tab[j + 1]) > 0)
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
	{
		fprintf(stderr, "No more arguments to be sorted.\n");
		exit(1);
	}
	ft_sort_string_tab(argv + 1);
	i = 1;
	while (i < argc)
	{
		printf("%s ", argv[i]);
		i++;
	}
	printf("\n");
	return (0);
}
