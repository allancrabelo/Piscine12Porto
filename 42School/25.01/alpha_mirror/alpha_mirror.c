#include <unistd.h>
int main(int agrc, char **argv)
{   
    int i;

    i = 0;
    if(agrc == 2)
    {
        while(argv[1][i])
        {
            if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
                argv[1][i] = 'z' - (argv[1][i] - 'a');
            else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                argv[1][i] = 'Z' - (argv[1][i] - 'A');
            write(1, &argv[1][i], 1);
            i++;
        }   
    }
    write(1, "\n", 1);
    return 0;
}