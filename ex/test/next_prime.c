#include <stdio.h>
int ft_is_prime(int nb)
{
	long int i;
	if (nb <= 1)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return 0;
		i++;
	}
	return 1;
}

int ft_find_next_prime(int nb)
{
	long int n = nb;
	if (n < 2)
		return 2;
	if (n > 2147483640 && n <= 2147483647)
		return (2147483647);
	while (!ft_is_prime(n) && n < 2147483640)
	{
		n++;
	}
	return n;
}
int main()
{
	int a = ft_find_next_prime(2147483640);
	printf("%d",a);
	return 0;
}
