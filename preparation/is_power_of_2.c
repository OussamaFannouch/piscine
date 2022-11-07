#include <stdio.h>
int		is_power_of_2(unsigned int n)
{
	unsigned long i;

	i = 1;
	while (i <= n)
	{
		if (i == n)
			return (1);
		i *= 2;
	}
	return (0);
}
int main()
{
	int a = is_power_of_2(15);
	printf("%d",a);
}
