#include <unistd.h>
int main(int ac, char **av)
{
	if (ac > 1)
	{
		int i=0;
		ac--;
		while (av[ac][i] != '\0')
		{
			write(1,&av[ac][i],1);
			i++;
		}
	}
	write(1,"\n",1);
	return 0;
}
