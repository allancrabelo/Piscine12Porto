#include <limits.h>
#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if(nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        ft_putnbr(147483648);

    }
    if(nb < 0)
    {
        ft_putchar('-');
        nb *= -1;
    }
    if(nb > 9)
    {
        ft_putnbr(nb / 10);
    }
    ft_putchar(nb % 10 + '0');
}

int main(void)
{
    int a;

    a = -2147483648;
    printf("%d\n", INT_MAX);
    printf("%d\n", INT_MIN);

    ft_putnbr(a);
    ft_putchar('\n');
    return 0;
}