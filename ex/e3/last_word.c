#include <unistd.h>
void rm_space(char *str)
{
	int i=0;
	int k;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t')
			k=i;
		i++;
	}
	str[k +1] = '\0';
}
int last_space(char *str)
{
	int i=0;
	int k=0;
	rm_space(str);
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t')
			k =i;
		i++;
	}
	return k;
}
int main(int ac, char **av)
{
	int i=0;
	if (ac == 2)
	{
		i=last_space(av[1]) + 1;
		while (av[1][i] != '\0')
		{
			write(1,&av[1][i],1);
			i++;
		}
	}
	write(1,"\n",1);
	return 0;
}
