#include <unistd.h>

void ft_trim(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	i--;
	while(str[i] == ' ')
		i--;
	while(str[i] != ' ')
		i--;
	i++;
	while(str[i] != ' ')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char a[] = "       Rabelo        ";

	ft_trim(a);
	write(1, "\n", 1);
	return 0;
}