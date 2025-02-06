#include <unistd.h>

int	main(int argc, char **argv)
{
	if(argc == 2)
	{
		int i;
		i = 0;
		
		while(argv[1][i] != '\0')
		{
			if(i == 0){
				write(1, &argv[1][i], 1); 
				i++;
			}
			else if(i % 3 == 0 && i % 5 == 0){
				write(1, "5", 1);
				i++;
			}
			else if(i % 3 == 0){
				write(1, "5", 1);	
				i++;
			}
			else if(i % 5 == 0){
				write(1, "3", 1);	
				i++;
			}
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}