char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
int main(void)
{

char src[] = "Hello";
	char dest[] = "World";
	char dest1[] = "Testing";
	printf("%s", ft_strcpy(dest, src));
	printf("\n%s", strcpy(dest1, src));
}