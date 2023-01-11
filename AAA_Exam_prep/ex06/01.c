#include <unistd.h>
int	main(int argc, char **argv)
{
	int	i;
	int z;
	z = 1;
	while (argv[z] && argc >= 1)
	{
		i = 0;

	while (argv[z][i] && argc >= 1)
	{
		write(1, &argv[z][i], 1);
		i++;
		
	}
	z++;
	write(1, "\n", 1);
	}
}