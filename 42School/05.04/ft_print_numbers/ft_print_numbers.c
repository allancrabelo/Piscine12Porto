#include <unistd.h>
/* void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
} */

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char a = '0';

	while(a <= '9')
	{
		ft_putchar(a);
		a++;
	}
}

int	main(void)
{
	ft_print_numbers();
	ft_putchar('\n');
	return 0;
}