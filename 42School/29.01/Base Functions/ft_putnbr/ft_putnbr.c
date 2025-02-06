#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putnbr(int n)
{
    if(n == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        ft_putnbr(147483648);
        return;
    }
    if(n < 0)
    {
        n *= -1;
        ft_putchar('-');
    }
    if(n > 9)
    {
        ft_putnbr(n / 10);
    }
    ft_putchar(n % 10 + '0');
}
int main(void)
{
    int i = -2147483648;

    ft_putnbr(i);
    ft_putchar('\n');
    return 0;
}