#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int j = 0;

    if(ac == 3)
    {
        while(av[2][j] && av[1][i] )
        {
            if(av[1][i] == av[2][j++])
                i++;
        }    
        if(!av[1][i])
            write(1, "1", 1);
        else
            write(1, "0", 1);
    }
    write(1, "\n", 1);
    return(0);
}

