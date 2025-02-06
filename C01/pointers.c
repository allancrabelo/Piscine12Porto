#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int swap;

    *a = 2;
    *b = 3;

    swap = *a;
    *a = *b;
    *b = swap;
}

int main(void)
{
    int a = 4;
    int b = 5;
    printf("%d | %d\n", a, b);

    ft_swap(&a, &b);
    printf("%d | %d\n", a, b);
    return 0;
}