unsigned int	ft_strcpy(char *dest, char *src, unsigned int size)
{
	int i=0;
	int j=0;
	while (src[j] != '\0')
		j++;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return j
}
