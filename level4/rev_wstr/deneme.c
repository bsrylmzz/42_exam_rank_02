#include <stdlib.h>
#include <unistd.h>


void    ft_putstr(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

char    **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char **tab;
    tab = (char**)malloc(sizeof(char*) * 100);
    while(str[i] != '\0')
    {
        tab[j] = (char*)malloc(sizeof(char) * 100);
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

int main(int ac, char **av)
{
    int i = 0;
    char **words;

    if(ac == 2)
    {
        words = ft_split(av[1]);
        while(words[i] != NULL)
            i++;
        i--;
        while(i >= 0)
        {
            ft_putstr(words[i]);
            if(i > 0)
                write(1, " ", 1);
            i--;
        }
    }
    write(1, "\n", 1);
    return(0);
}