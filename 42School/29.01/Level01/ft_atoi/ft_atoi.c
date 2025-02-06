int	ft_atoi(const char *str)
{
    int sign;
    int result;
    int i;

    i = 0;
    sign = 1;
    result = 0;

    while(str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
        i++;
    while(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            sign *= -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] - '0';
        i++;
    }
    return(sign * result);
}
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char a[] = "             ---+++++-+-+42";

    printf("%d\n", ft_atoi(a));
    printf("%d\n", atoi(a));

    return 0;
}