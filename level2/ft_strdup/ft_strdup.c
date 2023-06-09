#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int i = 0;
    int j = 0;
    char *tab;

    while(src[i])
        i++;
    tab = malloc(sizeof(char) * (i + 1));

    if(tab != NULL)
    {
        while(src[j] != '\0')
        {
            tab[j] = src[j];
            j++;
        }
        tab[j] = '\0';
    }
    return(tab);
}

int main()
{
    char a[] = "erkolaryanarakcanversin";
    printf("%s\n", ft_strdup(a));
}
