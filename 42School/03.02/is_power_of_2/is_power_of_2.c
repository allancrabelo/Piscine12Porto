int	    is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	if(n % 2 == 0)
	{
		return(is_power_of_2(n /= 2));
	}
	if (n == 1)
		return(1);
	return (0);
}
#include <stdio.h>
int	main(void)
{
	int i = 32;
	printf("%d\n", is_power_of_2(i));
	return 0;
}
