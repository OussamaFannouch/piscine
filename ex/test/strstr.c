// Online C compiler to run C program online
#include <stdio.h>
char	*ft_strstr(char *str, char *to_find)
{
	int i=0;
	int j=0;
	if (to_find[i] == '\0')
		return str;
	while (str[i] != '\0')
	{
		j=0;
		while (str[i+j] == to_find[j] && str[i+j] != '\0')
		{
			if (to_find[j+1] == '\0')
				return &str[i];
			j++;
		}
		i++;
	}
	return 0;
}
