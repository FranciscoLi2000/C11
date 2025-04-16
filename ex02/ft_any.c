#include <stdio.h>

int	ft_isalpha(char *str)
{
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
			return (1);
		str++;
	}
	return (0);
}

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
	{
		if (f(tab[i]))
			return (i + 1);
		i++;
	}
	return (-1);
}

#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
	{
		printf("The function will not check the program name.\n");
		exit(1);
	}
	i = ft_any(argv + 1, ft_isalpha);
	if (i != -1)
		printf("Found alpha char in the %d argument: %s\n", i, argv[i]);
	else
		printf("No alpha char found.\n");
	return (0);
}
