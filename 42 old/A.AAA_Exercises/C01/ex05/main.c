// Online C compiler to run C program online
#include <unistd.h>

void	ft_putstr(char *str)
{
    int z = 0;
    
	while (str[z])
	z++;
	{
	write(1, str, z);
	}	
}
int main(void)
{
    ft_putstr("Hey");
    return(0);
}