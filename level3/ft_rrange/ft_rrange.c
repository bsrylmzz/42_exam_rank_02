#include <stdio.h>
#include <stdlib.h>

int ft_abs(int c)
{
    if(c < 0)
        return(-c);
    return(c);
}

int     *ft_rrange(int start, int end)
{
    int i = 0;
    int *tab;

    tab = (int*)malloc(sizeof(int) * ft_abs(start - end) + 1);

    while(end > start)
    {
        tab[i] = end;
        end--;
        i++;
    }
    tab[i] = end;
    while(end < start)
    {
        tab[i] = end;
        end++;
        i++;
    }
    tab[i] = end;
    return(tab);
}

/*int main()
{
    int *rrange = ft_rrange(1, 3);
    int i = 0;
    while(i <= ft_abs(1 - 3))
    {
        printf("%d ", rrange[i]);
        i++;
    }
}*/