#include <stdio.h>

//int	ft_strlen(char *str);
//void	ft_putchar(char c);
int	ft_atoi(char *str);
void	ft_putnbr(int n);

int	main(int argc, char **argv)
{
	int	i;
	
	i = 1;
	if (argc)
	{
		while (argc > i)
		{	
			ft_putnbr(ft_atoi(argv[i]));
			i++;
		}
	}
	return (0);

}
