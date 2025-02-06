#include <unistd.h>

void ft_capitalize(char *str)
{
	int i;
	int j = 0;

	i = 0;
	while(str[i])
	{
		if(str[0] != ' ' && (str[i] >= 'a' && str[i] <= 'z') && i == 0)
			str[i] -= 32;
		if(str[1 - i] == ' ' && str[i] != ' ')
		{
			j = 0;
			while(str[i + j] && (str[i + j] < 'a' || str[i + j] > 'z') && (str[i + j] < 'A' || str[i + j] > 'Z'))
				j++;
			if(str[i + j -] && (str[i + j] >= 'a' && str[i + j] <= 'z'))
				str[i] -= 32;
		}
		write(1, &str[i], 1);
		i++;
	}
}

int main(void)
{
	char a[] = "        42hello                 world         ";
	ft_capitalize(a);
	return 0;
}