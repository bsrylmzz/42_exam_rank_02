int	ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    int result = 0;

    while(str[i] == ' ' || str[i] == '\t')
        i++;
    
    if(str[i] == '-')
    {
        sign *= -1;
        i++;
    }
    if(str[i] == '-' || str[i] == '+')
        i++;
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] + '0';
        i++;
    }
    return(sign * result);
}