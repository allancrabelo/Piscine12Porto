int ft_count_words(const char *str)
{
	int i;
	int word;

	i = 0;
	word = 0;
	while(str[i] == ' ')
		i++;
	while(str[i])
	{
		if(str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			word++;
		i++;
	}
	return (word);
}

#include <stdio.h>
int	main(void)
{
	char a[] = "Hello Piscine 42";
	char b[] = "";
	char c[] = "           lorem,ipsum           ";


	printf("%d\n", ft_count_words(a));
	printf("%d\n", ft_count_words(b));
	printf("%d\n", ft_count_words(c));

	return 0;
}
