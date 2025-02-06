#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int i;

        i = 0;
        while(argv[1][i * 2])
        {
            if(i % 2 == 0)
            {
               if(argv[1][i * 2] >= 'a' && argv[1][i * 2] <= 'z')
                    argv[1][i * 2] -= 32;
            }
            else if( i % 2 == 1)
            {
                if(argv[1][i * 2] >= 'A' && argv[1][i * 2] <= 'Z')
                    argv[1][i * 2] += 32;
            }
            write(1, &argv[1][i * 2], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}