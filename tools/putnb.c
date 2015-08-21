#include <stdio.h>

void	ft_putchar(char c);

void	ft_putnbr(int	n)
{
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	if (n > 0 && n <= 9)
		ft_putchar(n + '0');
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}
