#include <unistd.h>

void putnbr(int i)
{
    char str[] = "0123456789";
    if(i > 9)
        putnbr(i / 10);
    write(1, &str[i % 10], 1);
}


int main(int ac, char **av)
{
    (void)av;
    putnbr(ac - 1);
    write(1, "\n", 1);
    return(0);
}