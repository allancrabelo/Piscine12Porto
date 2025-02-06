int	ft_atoi(const char *str)
{
    int result;
    int sign;

    sign = 1;
    result = 0;
    while(*str == ' ' || *str >= 9 && *str <= 13)
        str++;
    if(*str == '-')
        sign = -1;
    if(*str == '-' || *str == '+')
        str++;
    while(*str >= '0' && *str <= '9')
    {
        result = result * 10 + (*str - '0');
        str++;
    }
    return(result * sign);
}
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    char a[] = "-+42";

    printf("%d\n", ft_atoi(a));
    printf("%d\n", atoi(a));
}