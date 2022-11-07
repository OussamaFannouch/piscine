#include <stdio.h>
#include <stdlib.h>
char    *ft_strdup(char *src)
{
	int i=0;
	char *copy;
	copy = (char *)malloc(sizeof(*src));
	if (copy == NULL)
		return NULL;
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return copy;
}
/*int main()
{
	char src[]= {"oussama"};
	char *a = ft_strdup(src);
	printf("original : %s\n",src);
	printf("copy : %s\n",a);
}/*
