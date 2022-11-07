#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*p;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	p = (int *)malloc(sizeof(int) * (max - min));
	if (!p)
		return (-1);
	while (i < (max - min))
	{
		p[i] = min + i;
		i++;
	}
	*range = p;
	return (max - min);
}
