#include <unistd.h>

char *ft_rev_print (char *str)
{
	int i;
	
	i = 0;
	while(str[i])
		i++;
	while(i--)
		write(1, &str[i], 1);
	return str;
}

int main(void)
{
	char a[] = "Aline";

	ft_rev_print(a);
	write(1, "\n", 1);
	return 0;
}