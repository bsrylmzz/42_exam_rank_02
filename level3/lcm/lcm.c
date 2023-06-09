#include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int nbr;

    if(a == 0 || b == 0)
        return(0);
    if(a > b)
        nbr = a;
    else
        nbr = b;
    while(nbr <= (a * b))
    {
        if(nbr % a == 0 && nbr % b == 0)
            return(nbr);
        nbr++; 
    }
    return(0);
}

/*int main()
{
    printf("%d\n", lcm(2, 3));
}*/