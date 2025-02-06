#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int i)
{
	if(i > 9)
	{
		ft_putnbr(i / 10);
	}
	ft_putchar(i % 10 + '0');
}

int	main(void)
{
	int i;

	i = 1;
	while(i <= 100)
	{
		if(i % 4 == 0 && i % 7 == 0)
			write(1, "fizzbuzz\n", 9);
		else if(i % 4 == 0)
			write(1, "fizz\n", 5);
		else if(i % 7 == 0)
			write(1, "buzz\n", 5);
		else
		{
			ft_putnbr(i);
			ft_putchar('\n');
		}
		i++;
	}
	return 0;
}