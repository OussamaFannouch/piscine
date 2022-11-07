#include <stdio.h>
int	ft_atoi(const char *str)
{
	int i=0;
	int s =1;
	int r = 0;
	while (str[i] <= ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0'); 
		i++;
	}
	return (s * r);
}
int main(void)
{
	const char str[] = {"     -1654bnsg46ga"};
	int a = ft_atoi(str);
	printf("%d",a);
	return 0;
}
