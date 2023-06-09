#include <unistd.h>


int ft_atoi(char *str)
{
    int i = 0;
    int result = 0;
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] - '0';
        i++;
    }
    return(result);
}

void ft_putnbr(int c)
{
    char str[] = "0123456789";
    if(c > 9)
        ft_putnbr(c / 10);
    write(1, &str[c % 10], 1);
}



int main(int ac, char **av)
{
    int nbr;
    int i = 1;
    
    if(ac == 2)
    {
        nbr = ft_atoi(av[1]);
        while(i <= 9)
        {
            ft_putnbr(i);
            write(1, " x ", 3);
            ft_putnbr(nbr);
            write(1, " = ", 3);
            ft_putnbr(i * nbr);
            if(i < 9)
                write(1, "\n", 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}