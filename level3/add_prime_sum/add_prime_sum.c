#include <unistd.h>

int ft_atoi(char *str)
{
    int result = 0;
    int i = 0;

    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] - '0';
        i++;
    }
    return(result);
}

void putnbr(int c)
{
    char str[] = "0123456789";

    if(c > 9)
        putnbr(c / 10);
    write(1, &str[c % 10], 1);
}

int prime(int i)
{
    int a = 2;

    while(a < i)
    {
        if(i % a == 0)
            return(0);
        a++;
    }
    return(1);
}


int main(int ac, char **av)
{
    int i = 2;
    int result = 0;

    if(ac == 2)
    {
        int nbr = ft_atoi(av[1]);

        while(i <= nbr)
        {
            if(prime(i) == 1)
                result += i;
            i++;
        }
        putnbr(result);
    }
    if(ac != 2)
        write(1, "0", 1);
    write(1, "\n", 1);
}
