#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int	ft_atoi(char *str);
/* write prog to pop a carre with obstacle */

char *create_carre(int cote)
{
	int	i;
	int	j;
	char	*carre;

	i = 0;
	while (!(carre=(char*)malloc(sizeof(char) * cote * cote)))
		(carre = (char*)malloc(sizeof(char) * cote * cote));
	while (i < cote * cote)
	{
		j = 0;
		while (j < cote)
		{
			carre[i] = '.';
			j++;
			i++;
		}
		carre[i] = '\n';
		i++;
	}
	return (carre);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if(argc)
	{
		while (i < argc)
		{
			ft_putstr(create_carre(ft_atoi(argv[i])));
			i++;
		}
	}
	return (0);
}
