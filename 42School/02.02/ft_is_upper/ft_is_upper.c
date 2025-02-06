int ft_is_upper(const char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(!(str[i] >= 'A' && str[i] <= 'Z'))
            return 0;
        i++;
    }
    return(1);
}
#include <stdio.h>
int main(int argc, char **argv)
{
    if(argc == 2)
    {
        printf("%d", ft_is_upper(argv[1]));
    }
    printf("\n");
    return 0;
}