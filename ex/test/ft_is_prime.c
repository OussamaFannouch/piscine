#include <stdio.h>
int ft_is_prime(int nb)
{
	int i;
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
int main()
{
	int a = ft_is_prime(1);
	printf("%d",a);
	return 0;
}
