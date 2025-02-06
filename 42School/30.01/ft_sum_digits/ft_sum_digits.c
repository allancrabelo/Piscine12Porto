#include <stdio.h>
int ft_sum_digits(int nb, int *result)
{
    if(nb > 9)
    {
    ft_sum_digits(nb / 10, result);
    }
    *result += (nb % 10);
    return(*result);
}
int main(void)
{
    int i = 426;
    int res = 0;
    printf("%d\n", ft_sum_digits(i, &res));
    return 0;
}