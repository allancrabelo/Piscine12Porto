int	verification_vowels(char c)
{
	return(c == 'a' || c == 'e' ||c == 'i' ||c == 'o' ||c == 'u' ||
	c == 'A' ||c == 'E' ||c == 'I' ||c == 'O' ||c == 'U');
}

int	ft_count_vowels(char *str)
{
	int vowel;
	int i;

	vowel = 0;
	i = 0;
	while(str[i])
	{
		if(verification_vowels(str[i]) == 1)
			vowel++;
		i++;
	}
	return(vowel);
}

#include <stdio.h>
int main(void)
{
	char a[] = "42 SchoolAEIOUaeiou";

	printf("%d\n", ft_count_vowels(a));
	return 0;
}