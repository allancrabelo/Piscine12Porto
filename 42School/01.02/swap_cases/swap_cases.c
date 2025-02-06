

char *swap_cases(char *str)
{
    int i;
    i = 0;

    while(str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;

        else if(str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i++;
    }
    return(str);
}
#include <stdio.h>
int main(void)
{
    char a[] = "42_ScHOlLOlsoaSSAA";
    printf("%s\n", swap_cases(a));
    return 0;
}