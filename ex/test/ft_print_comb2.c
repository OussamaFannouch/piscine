#include <unistd.h>
void putchar(char c)
{
	write(1,&c,1);
}
void ft_comb2(void)
{
	int i = 0;
	int j = 0;
	
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			putchar((i / 10)+ '0');
			putchar((i % 10) + '0');
			write(1," ",1);
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (i != 98)
				write(1,", ",2);
			j++;
		}
		i++;
	}
}
int main()
{
	ft_comb2();
	return 0;
}
