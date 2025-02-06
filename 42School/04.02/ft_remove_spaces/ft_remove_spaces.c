#include <unistd.h>

void	ft_remove_spaces(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(str[i] != ' ')
			write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char a[] = "      Allan         Rabelo\n        ";

	ft_remove_spaces(a);
	return 0;
}