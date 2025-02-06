#include <unistd.h>
int is_vowel(char c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
     || c == 'A' || c == 'O' || c == 'I' || c == 'E' || c == 'U')
        return(1);
    return(0);
}

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int i;

        i = 0;
        while(argv[1][i])
        {
            if(is_vowel(argv[1][i]) == 1)
                write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}