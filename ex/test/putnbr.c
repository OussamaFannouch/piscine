#include <unistd.h>
void putchar(char c)
{
	write(1,&c,1);
}
void ft_putnbr(int nb)
{
	char a;
	long int n;
	n = nb;
	if (n < 0)
	{
		write(1,"-",1);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		putchar(n + 48);
	}
}
int main()
{
	ft_putnbr(-2147483648);
	return 0;
}
