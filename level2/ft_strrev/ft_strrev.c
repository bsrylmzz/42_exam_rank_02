#include <stdio.h>

char    *ft_strrev(char *str)
{
    int i = -1;
    int u = 0;
    char temp;

    while(str[u])
        u++;
    while(++i < u / 2)
    {
        temp = str[i];
        str[i] = str[u - 1 - i];
        str[u - 1 - i] = temp;
    }
    return(str);
}

int main()
{
    char a[] = "erkolarayanarakcanversinnn!!!";
    printf("%s\n", ft_strrev(a));
}