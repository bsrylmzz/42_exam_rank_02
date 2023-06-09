#include <stdlib.h>

char    **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char **tab;

	tab = (char **)malloc(sizeof(char*) * 1000);
	while(str[i] != '\0')
	{
		tab[j] = (char *)malloc(sizeof(char) * 1000);
		while(str[i] <= 32)
			i++;
		while(str[i] > 32)
		{
			tab[j][k] = str[i];
			i++;
			k++;
		}
		tab[j][k] = '\0';
		j++;
		k = 0;
	}
	tab[j] = '\0';
	return(tab);
}
