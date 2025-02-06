#include <stdio.h>
int main(void)
{
    int ptr[] = {4, 2, 0};

    printf("%d\n", *ptr);

    ptr[2];
    printf("%d\n", --ptr[0]);
    return 0;
}