#include <unistd.h>
int	main(int ac, char **av)
{
if(ac != 2)
	write(1, "a", 1);
else
{
	while(*av[1])
	{
		if(*av[1]++ == 'a')
		{
			write(1, "a", 1);
			break;
		}

	}

}
write(1, "\n",1);
}

/*Write a program that takes a string, and displays the first 'a' character it
encounters in it, followed by a newline. If there are no 'a' characters in the
string, the program just writes a newline. If the number of parameters is not
1, the program displays 'a' followed by a newline.
Example:
$> ./aff_a "abc" | cat -e
a$
$> ./aff_a "dubO a POIL" | cat -e
a$
$> ./aff_a "zz sent le poney" | cat -e
$
$> ./aff_a | cat -e
a$
*/