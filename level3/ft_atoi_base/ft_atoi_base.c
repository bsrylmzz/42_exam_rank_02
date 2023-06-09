int	ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int sign = 1;
    int result = 0;

    while(str[i] <= 32)
        i++;
    
    if(str[i] == '-')
    {
        sign = -1;
        i++;
    }

    if(str[i] == '-' || str[i] == '+')
        i++;

    while(str[i])
    {
        result * str_base;
        if(str[i] >= '0' && str[i] <= '9')
            result += str[i] - 48;
        else if(str[i] >= 'a' && str[i] <= 'z')
            result += str[i] - 87;
        else if(str[i] >= 'A' && str[i] <= 'Z')
            result += str[i] - 55;
        i++;
    }
    return(sign * result);
}