#include <stdio.h>
int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i=0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n)
		i++;
	return (s1[i] - s2[i]);
}
int main()
{
	int a = ft_strncmp("anb","ana",3);
	printf("%d",a);
}
