#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	int n = nbr;
	int len = 0;

	if(nbr == -2147483648)
		return("-2147483648");
	if(nbr <= 0)
		len++;
	while(n)
	{
		n /= 10;
		len++;
	}
	char *tab = (char*)malloc(sizeof(char) * (len + 1));
	if(!tab)
		return(NULL);
	tab[len] = '\0';
	if(nbr == 0)
	{
		tab[0] = '0';
		return(tab);
	}
	if(nbr < 0)
	{
		tab[0] = '-';
		nbr = -nbr;
	}
	while(nbr)
	{
		tab[--len] = nbr % 10 - '0';
		nbr /= 10;
	}
	return(tab);
}
