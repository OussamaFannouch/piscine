#include <unistd.h>
int main(int ac,char **av)
{
	int i;
	int j;
	j = ac - 1;
	if (ac > 1)
	{
		i =0;
		while (av[j][i] != '\0')
		{
			write(1,&av[j][i],1);
			i++;
		}
	}
	write(1,"\n",1);
	return 0;
}
