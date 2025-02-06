int	ft_atoi(const char *str)
{
    int i;
    int result;
    int sign;

    i = 0;
    sign = 1;
    result = 0;
    while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if(str[i] == '-' || str[i] == '+')
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
int main(int argc, char **argv)
{
    if(argc != 2)
    {
        printf("Input Error\n");
        return (0);
    }
    printf("%d\n", ft_atoi(argv[1]));
    return 0;

}
