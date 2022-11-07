#include <unistd.h>
void ft_putchar(char c)
{
	write(1,&c,1);
}
void print_rev_bits(unsigned char octet)
{
	int a = octet;
	if (a != 0)
	{
		ft_putchar((a % 2) + 48);
		print_bits(a / 2);
	}
}
int main()
{
	print_bits(250);
	return 0;
}
