#include <stdio.h>

int	ft_isdigit(char *str)
{
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			return (1);
		str++;
	}
	return (0);
}

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length - 1)
	{
		if (f(tab[i]))
			count++;
		i++;
	}
	return (count);
}

int	main(int argc, char **argv)
{
	int	cnt;

	cnt = ft_count_if(argv + 1, argc, ft_isdigit);
	printf("Found %d argument(s) with numeric characters.\n", cnt);
	return (0);
}
