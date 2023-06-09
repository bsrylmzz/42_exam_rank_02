//#include <stdio.h>


int	    is_power_of_2(unsigned int n)
{
    unsigned long i = 1;

    while(i < 0xffffffff)
    {
        if(i == n)
            return(1);
        i++;
    }
    return(0);
}

/*int main()
{
    printf("%d\n", is_power_of_2(7));
}*/
