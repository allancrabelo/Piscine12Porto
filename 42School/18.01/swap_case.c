char *swap_case(char *src)
{
    int i;

    i = 0;
    while(src[i])
    {
        if(src[i] >= 'a' && src[i] <= 'z')
            src[i] = src[i] - 32;
        else if(src[i] >= 'A' && src[i] <= 'Z')
            src[i] = src[i] + 32;
        i++;
    }
    return(src);
}
#include <stdio.h>

int main(void)
{
    char str[] = "Hello World!";
    
    printf("Original: %s\n", str);
    swap_case(str);
    printf("Alterado: %s\n", str);

    return 0;
}