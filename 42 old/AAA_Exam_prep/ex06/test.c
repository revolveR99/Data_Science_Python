
#include <unistd.h>

int		main(int ac, char **av)
{
	if (ac > 0)
		while (*av[1])
			write(1, av[1]++, 1);
	write(1, "\n", 1);
	return (0);
}
