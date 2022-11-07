#include <unistd.h>
int main(int ac,char **av)
{
	int i;
	int j;
	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			j=1;
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				while (j <= (av[1][i] - 'a') + 1)
				{
					write(1,&av[1][i],1);
					j++;
				}
			}
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				j=1;
				while (j <= (av[1][i] - 'A') + 1)
				{
					write(1,&av[1][i],1);
					j++;
				}
			}
			else 
			{
				write(1,&av[1][i],1);
			}
			i++;
		}
	}
	write(1,"\n",1);
	return 0;
}
