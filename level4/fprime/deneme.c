#include <stdio.h>
#include <stdlib.h>

void    ft_prime(int c)
{
    int i = 2;

    if(c == 1)
        printf("1");
    while(c >= i)
    {
        if(c % i == 0)
        {
            printf("%d", i);
            if(c != i)
                printf("*");
            c /= i;
            i--;
        }
        i++;                
    }                      
}                         
                          
int main(int ac, char **av)
{
    if(ac == 2)
        ft_prime(atoi(av[1]));
    printf("\n");
    return(0);
}