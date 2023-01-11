#include <unistd.h>
int	main(int ar	,char **arg)
{
	int		i;
	i = 0;
	while(ar > 0 && *arg[i])
	{
		write(1, &*arg[i], 1);
		arg[i]++;
	}	
	write(1, "\n", 1);
}