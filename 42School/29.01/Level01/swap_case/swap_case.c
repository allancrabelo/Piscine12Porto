char    *swap_case(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        else if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        i++;
    }
    return(str);
}
#include <stdio.h>
int main(int argc, char **argv)
{
    if(argc != 2)
    {
        printf("Input Error\n");
        return 0;
    }
    printf("%s\n", swap_case(argv[1]));
    return(0);
}