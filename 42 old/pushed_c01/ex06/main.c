// Online C compiler to run C program online
#include <stdio.h>

   int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}


int main() {
  
   printf("a: %d", ft_strlen("Martin likes chicken with rice"));

}
