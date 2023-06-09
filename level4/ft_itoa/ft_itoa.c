#include <stdlib.h>

char *ft_itoa(int nbr)
{
    int n = nbr;
    int len = 0;

    if (nbr == -2147483648)
    {
        return "-2147483648";
    }
    if (nbr <= 0)
    {
        len++;
    }
    while (n)   
    {
        n /= 10;
        len++;
    }

    char *result = (char *)malloc(sizeof(char) * (len + 1));
    if (result == NULL)
    {
        return NULL;
    }
    result[len] = '\0';
    if (nbr == 0)
    {
        result[0] = '0';
        return result;
    }
    if (nbr < 0)
    {
        result[0] = '-';
        nbr = -nbr;
    }
    while (nbr)
    {
        result[--len] = nbr % 10 + '0';
        nbr /= 10;
    }
    return result;
}
/*int main()
{
    int num = 2147483647;
    char *str = ft_itoa(num);

    if (str != NULL)
    {
        printf("Tamsayı: %d\n", num);
        printf("Karakter Dizisi: %s\n", str);
        free(str); // Bellek tahsisini serbest bırak
    }
    else
    {
        printf("Bellek tahsis hatası!\n");
    }

    return 0;
}*/