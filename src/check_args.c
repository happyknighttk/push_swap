
#include "../include/push_swap.h"

void	error(char *str)
{
	ft_putendl_fd(str, 2);
	exit(0);
}

static int	isrepeat(int n, char **av, int i)
{
	i++;
	while (av[i])
	{
		if (ft_atoi(av[i]) == num)
			return (1);
		i++;
	}
	return (0);
}

static int	isnumber(char *num)
{
	int	i;

	i = 0;
	if (num[0] == '-')
		i++;
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

void	check_args(int ac, char **av)
{
	int		i;
	long	num;
	char	**tab;

	i = 0;
	if (ac == 2)
		tab = ft_split(av[1], ' ');
	else
	{
		i = 1;
		tab = av;
	}
	while (tab[i])
	{
		num = ft_atoi(tab[i]);
		if (!isnumber(tab[i]))
			error("Error");
		if (isrepeat(num, tab, i))
			error("Error");
		if (num < -2147483648 || num > 2147483647)
			ft_error("Error");
		i++;
	}
	if (ac == 2)
		free_str(tab);
}