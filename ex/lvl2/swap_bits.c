#include <unistd.h>
#include <stdio.h>
void ft_putchar(char c)
{
	write(1,&c,1);
}
void	print_bits(unsigned char octet, int i)
{
	int tab[8];
	int a = octet;
	if (a != 0)
	{
		print_bits(a / 2, );
		tab[i++] = a % 2;
	}
	printf("t[%d] = %d \n",i,tab[i]);	
}
int main()
{
	print_bits(250);
	return 0;
}
