int count_uppercase(const char *str)
{
	int i;
	int upper;

	i = 0;
	upper = 0;
	while(str[i])
	{
		if(!(str[i] >= 'A' && str[i] <= 'Z'))
			upper++;
		i++;
	}
	return (upper);
}

#include <unistd.h>

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int n)
{
	if(n > 9)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar(n % 10 + '0');
}

int	main(int argc, char **argv)
{
	if(argc != 2)
	{
		ft_putstr("Input Error\n");
		return 0;
	}
	ft_putnbr(count_uppercase(argv[1]));
	ft_putchar('\n');
	return 0;
}