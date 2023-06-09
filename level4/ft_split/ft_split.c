#include <stdlib.h>
#include <stdio.h>

char **ft_split(char *str)
{
	int i = 0, j = 0, k = 0;
	char **tab;

	tab = (char**)malloc(sizeof(char *) * 1000);
	while (str[i] != '\0')
	{
		tab[j] = (char*)malloc(sizeof(char) * 1000);
		while (str[i] != '\0' && str[i] <= 32)
			i++;
		while (str[i] != '\0' && str[i] > 32)
		{
			tab[j][k] = str[i];
			i++;
			k++;
		}
		tab[j][k] = '\0';
		j++;
		k = 0;
	}
	tab[j] = 0;
	return (tab);
}
/*int main()
{
    char str[] = "     AkjhZ zLKIJz , 23y";
    char** words = ft_split(str);
    int i = 0;
    while(words[i] != NULL)
    {
        printf("%s ", words[i]);
        i++;
    }
}*/