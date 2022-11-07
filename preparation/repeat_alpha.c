#include <unistd.h>
int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i=0;
		int j = 0;
		while (av[1][i] != '\0')
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				j = av[1][i] - 'a' + 1;
				while (j > 0)
				{
					write(1,&av[1][i],1);
					j--;
				}
			}
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				j = av[1][i] - 'A' + 1;
				while (j > 0)
				{
					write(1,&av[1][i],1);
					j--;
				}
			}
			else
				write(1,&av[1][i],1);
			i++;
		}
	}
	write(1,"\n",1);
	return 0;
}
