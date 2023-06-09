#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int i = 0;
	char **words;

	if(ac == 2)
	{
		words = ft_split(av[1]);
		while(words[i] != '\0')
			i++;
		i--;
		while(i >= 0)
		{

		}
	}
}
