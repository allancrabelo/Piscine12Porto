#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 3)
    {
        int i;
        int j;
        int tab[256] = {0};

        i = 0;
        while(argv[1][i])
        {
            j = 0;
            while(argv[2][j])
            {
                if(argv[1][i] == argv[2][j])
                {
                    if(tab[(int)argv[1][i]] == 0)
                        {
                            tab[(int)argv[1][i]] = 1;
                            write(1, &argv[1][i], 1);
                        }
                }
                j++;
            }
            i++;
        }
    }
    write(1 , "\n", 1);
    return 0;
}