#include <unistd.h>
void	ft_print_numbers(void)
{
	char c;
	c = '0';
	while (c >= '0' && c<='9')
	{
		write(1,&c,1);
		c++;
	}
	write(1,"\n",1);
	
}
int main(void)
{
	ft_print_numbers();
	return(0);
}