
#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	*i;
	int	*j;
	int	tmp;

	i = tab;
	while (i < tab + size)
	{
		j = tab + (size - 1);
		while (j > i)
		{
			if (*i > *j)
			{
				tmp = *j;
				*j = *i;
				*i = tmp;
			}
			j--;
		}
		i++;
	}
}

void ft_sort_int_tab(int *tab, int size)
{
	int i;
	int swap;
	while (size >= 0){
		i = 0;
		while (i < size - 1){
			if (*(tab + i) > *(tab + (i+1))){
					swap = *(tab + i);
					*(tab + i) = *(tab + i+ 1);
					*(tab + i + 1) = swap;
			}
			i++;
		}
		size--;
	}
}

int main(){
	int tab[6] = {1,2,3,4,5,6};
	int size = 6;
	ft_sort_int_tab(tab, size);
	int i = 0;
	while (i < size ){
		printf("%d",tab[i]);
		i++;
	}
}