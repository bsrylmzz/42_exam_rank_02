#include <stdlib.h>
//#include <stdio.h>

char    **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char **tab;

    tab = (char**)malloc(sizeof(char*) * 1000);
    while(str[i] != '\0')
    {
        tab[j] = (char*)malloc(sizeof(char) * 1000);
        while(str[i] <= 32)
            i++;
        while(str[i] > 32)
        {
            tab[j][k] = str[i];
            k++;
            i++;
        }
        tab[j][k] = '\0';
        j++;
        k = 0;
    }
    tab[j] = '\0';
    return(tab);
}

/*int main()
{
    char strr[] = "deneme yapalimm xx";
    char **word = ft_split(strr);
    int i = 0;
    while(word[i] != NULL)
    {
        printf("%s ", word[i]);
        i++;
    }
}*/