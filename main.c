
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Appel fonction */
char *ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char 	*ft_strstr(char *str, char *to_find);
int	ft_strcmp(char *s1, char *s2);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strupcase(char *str);
char	*ft_strlowcase(char *str);
char 	*ft_strcapitalize(char *str);
char	*ft_strcat(char *dest, char *src);
char	*ft_strncat(char *dest, char *src, int nb);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
void	ft_putnbr_base(int nbr, char *base);

/* Main */
int	main(int argc, char **argv)
{
	int	i;
	unsigned int	size;
	int	nb;

	i = 2;
	size = 5;
	nb = 42;
	if (argc)
	{
		while (i < argc)
		{
			/* Ajout fonction */
			printf("%s\n", ft_strstr(argv[i - 1], argv[i]));
//			printf("%s\n", strstr(argv[i - 1], argv[i]));
//			printf("%i\n", argc);
//			ft_putnbr_base(size, argv[i]);
			/* incrementation */
			i++;
		}
	}
	return (0);
}
