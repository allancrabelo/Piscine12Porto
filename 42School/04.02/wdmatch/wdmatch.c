#include <unistd.h>

int main(int argc, char **argv)
{
	if(argc == 3)
	{
		int i;
		int j;
		int k;

		i = 0;
		k = 0;
		j = 0;
		while(argv[1][i] && argv[2][j])
		{
			if(argv[1][i] == argv[2][j])
				i++;
			j++;
		}
		if(argv[1][i] == '\0')
		{
			while(argv[1][k])
			{
				write(1, &argv[1][k], 1);
				k++;
			}
		}
	}
	write(1, "\n", 1);
	return 0;
}