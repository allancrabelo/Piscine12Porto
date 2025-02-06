#include <unistd.h>

int verification(char c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' )
        return(1);
    if(c >= 'a' && c <= 'z')
        return(2);
    if(c >= 'A' && c <= 'Z')
        return(3);
    if(c >= '0' && c <= '9')
        return(4);
    if(c <= 32)
        return(5);
    return(0);
}

/* int vowel_verification(char c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' )
        return(1);
    return(0);
} */

int main(int argc, char **argv)
{
    int i;

    i = 0;
    (void)argc;
    while(argv[1][i])
    {
        if(verification(argv[1][i]) == 2  || verification(argv[1][i]) == 1)
        {
            write(1, &argv[1][i], 1);
        }
        i++;
    }
    write(1, "\n", 1);
    return 0;
}