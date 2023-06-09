#include <unistd.h>

int atoi(char *str)
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

void print_hexa(int c)
{
    char str[] = "0123456789abcdef";
    if(c > 16)
        print_hexa(c / 16);
    write(1, &str[c % 16], 1);
}


int main(int ac, char **av)
{
    if(ac == 2)
        print_hexa(atoi(av[1]));
    write(1, "\n", 1);
    return(0);
}