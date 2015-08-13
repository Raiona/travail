#include <stdio.h>

int	ft_strlen(char *str);
void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	i;
	
	i = 1;
	if (argc)
	{
		while (argc > i)
		{
			printf("%i", ft_strlen(argv[i]));
			i++;
		}
	}
	return (0);

}
