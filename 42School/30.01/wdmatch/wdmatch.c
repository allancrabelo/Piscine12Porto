#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 3)
    {
        int j;
        int i;
        int k;
        char result[100];

        k = 0;
        i = 0;
        j = 0;
        while(argv[2][i] && argv[1][j])
        {
            while(argv[1][j] == argv[2][i])
            {
                result[k] = argv[2][i];
                i++;
                j++;
            }
            i++;
        }
        if(argv[1][j] == '\0')
        {
            result[k] = '\0';
            k = 0;
            while (result[k] != '\0')
            {
                write(1, &result[k], 1);
                k++;
            }
        }

    }
    write(1, "\n", 1);
    return 0;
}