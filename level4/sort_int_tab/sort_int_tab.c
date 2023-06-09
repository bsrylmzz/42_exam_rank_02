#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i = 0;
    int temp;
    while(i < (size - 1))
    {
        if(tab[i] > tab[i + 1])
        {
            temp = tab[i + 1];
            tab[i + 1] = tab[i];
            tab[i] = temp;
            i = 0; 
        }
        else
            i++;
    }
}

/*int main()
{
    int str[] = {4, 10, 2, 8, 5, 6, 3, 1, 7};
    int i = 0;
    sort_int_tab(str, 9);
    while(i < 9)
    {
        printf("%d ", str[i]);
        i++;
    }

}*/