#include <unistd.h>

void	ft_print_numbers(void)
{
	write(1, "0123456789", 10);
}

int	main(void)
{
	ft_print_numbers();
	write(1, "\n", 1);
	return 0;
}