#include <stdio.h>
int ft_atoi(char *str)
{
	int i=0;
	int s=1;
	int r=0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return (s * r);
}
int main()
{
	int a = ft_atoi(" ---+--+1234ab567");
	printf("%d",a);
	return 0;
}
