#include <unistd.h>
int	main()
{
	char 	c;
	c = '9';
	while(c >= '0' &&  c <= '9')
	{
		write(1, &c, 1);
		c--;
	}
	
		
	
	
	return(0);
}