#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 3)
    {
        int tab[256] = {0};
        int i;
        int j;

        j = 1;
        i = 0;
        while(j < argc)
        {
            i = 0;
            while(argv[j][i])
            {
                if(tab[(int)argv[j][i]] == 0)
                {
                    tab[(int)argv[j][i]] = 1;
                    write(1, &argv[j][i], 1);
                }
                i++;
            }
            j++;
        }
    }
    write(1, "\n", 1);
    return 0;
}