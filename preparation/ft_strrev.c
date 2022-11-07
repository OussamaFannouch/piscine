#include <stdio.h>
char    *ft_strrev(char *str)
{
	char tmp;
	int j=0;
	while (str[j] != '\0')
		j++;
	j--;
	int i = 0;
	while (j > i)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		j--;
		i++;
	}
	return str;
}
int main()
{
	char str[]={"oussama"};
	char *a = ft_strrev(str);
	printf("%s",a);
}
