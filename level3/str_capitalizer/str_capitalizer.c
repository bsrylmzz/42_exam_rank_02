#include <unistd.h>

void str_capitalizer(char *str)
{
    int i = 0;

    if(str[i] >= 'a' && str[i] <= 'z')
    {
        str[i] -= 32;
        write(1, &str[i], 1);
        i++;
    }
    
    while(str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] == ' ' || str[i - 1] == '\t'))
            str[i] -= 32;
        write(1, &str[i], 1);
        i++;
    }
}



int main(int ac, char **av)
{
    int i;

    if(ac == 1)
        write(1, "\n", 1);
    else
    {
        i = 1;
        while(i < ac)
        {
            str_capitalizer(av[i]);
            write(1, "\n", 1);
            i++;
        }
    }
    return(0);
}