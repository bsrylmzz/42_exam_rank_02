#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int nbr)
{
    int len = 0;
    int n = nbr;

    if(nbr == -2147483648)
        return("-2147483648");
    if(nbr <= 0)
        len++;
    while(n)
    {
        n /= 10;
        len++;
    }
    char *result = (char*)malloc(sizeof(char) * (len + 1));
    if(result == NULL)
        return(NULL);
    result [len] = '\0';
    if(nbr == 0)
    {
        result[0] = '0';
        return(result);
    }
    if(nbr < 0)
    {
        result[0] = '-';
        nbr = -nbr;
    }
    while(nbr)
    {
        result[--len] = nbr % 10 + '0';
        nbr /= 10;
    }
    return(result);
}

/*int main()
{
    int i = 2147483647;
    char *ton = ft_itoa(i);

    printf("tam sayı : %d\n", i);
    printf("itoali hali : %s\n", ton);
}*/