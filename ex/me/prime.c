#include <stdio.h>
int    ft_is_prime(int nb)
{
	int	i;
	int k=0;
	i=0;
	if (nb == 0 || nb == 1)
		return (k);
	else if (nb == 2)
		return 1;
	else
	{
		i = 3;
		while (i < nb)
		{
			if (nb % i == 0)
			{
				k = 0;
				break;
			}
			k = 1;
			i++;
		}
	}
	return (k);
}
int main() {
  int a = ft_is_prime(2147483647);
  printf("%d",a);
  return 0;
}
