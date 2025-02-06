#include <unistd.h>
int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int i;
        int even;
        i = 0;
        even = 0;

        while(argv[1][i])
        {
            if(even % 2 == 0)
                write(1, &argv[1][i], 1);
            i++;
            even++;
        }
    }
    write(1, "\n", 1);
    return 0;
}