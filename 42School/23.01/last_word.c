#include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if(argc == 2)
    {
        while(argv[1][i])
            i++;
		if(argv[1][i] == ' ' || argv[1][i] == '\t' || argv[1][i] == '\0' )
        {
			while(argv[1][i] == ' ' || argv[1][i] == '\t' || argv[1][i] == '\0')
				i--;
		}
        while(argv[1][i] != ' ')
            i--;
		i++;
		while(argv[1][i] && argv[1][i] != ' ')
		{
			write(1, &argv[1][i], 1);
			i++;
		}
    }
    write(1, "\n", 1);
    return 0;
}