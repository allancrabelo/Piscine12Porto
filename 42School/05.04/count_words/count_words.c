int count_words(const char *str)
{
	int i;
	int words;

	i = 0;
	words = 0;
	while(str[i] == ' ') //space ignore;
		i++;
	while(str[i])
	{
		if(str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			words++;
		i++;
	}
	return (words);
}

#include <stdio.h>
int	main(int argc, char **argv)
{
	if(argc == 2)
	{
		printf("%d", count_words(argv[1]));
	}
	printf("\n");
	return 0;
}