#include <stdlib.h>
#include <stdio.h>



int ft_abs(int i)
{
    if(i < 0)
        return(-i);
    return(i);
}

int     *ft_range(int start, int end)
{
    int i = 0;
    int *tab;

    tab = (int*)malloc(sizeof(int)* ft_abs(start - end) + 1);

    while(start > end)
    {
        tab[i] = start;
        start--;
        i++;
    }
    tab[i] = start;
    while(start < end)
    {
        tab[i] = start;
        start++;
        i++;
    }
    tab[i] = start;
    return(tab);
}
/*int main()
{
    int *range = ft_range(5, 10);
    int i = 0;
    while(i <= ft_abs(5 - 10))
    {
        printf("%d ", range[i]);
        i++;
    }
}*/
