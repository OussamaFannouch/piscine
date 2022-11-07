#include <unistd.h>
int checker(char *str,char c,int pos)
{
	int i=0;
	while (i < pos)
	{
		if (str[i] == c)
			return 0;
		i++;
	}
	return 1;
}
int main(int ac, char **av)
{
	int i=0;
	int j;
	if (ac == 3)
	{
		while (av[1][i] != '\0')
		{
			j =0;
			while (av[2][j] != '\0')
			{
				if (av[1][i] == av[2][j])
				{
					if (checker(av[1],av[1][i],i) == 1)
					{
						write(1,&av[1][i],1);
						break;
					}
				}
				j++;
			}
			i++;		
		}
	}
	write(1,"\n",1);
	return 0;
}
