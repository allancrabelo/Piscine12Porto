#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;
	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int i;

		i = 0;
		while(argv[1][i])
			i++;
		ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
	return 0;
}