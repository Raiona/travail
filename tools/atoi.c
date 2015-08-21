int	ft_atoi(char *str)
{
	int	i;
	int	positive;
	int	nb;
	int	value;

	i = 0;
	positive = 1;
	value = 1;
	if (str[i] == '-')
		positive = -positive;
	while (!(str[i] > '0' && str[i] <= '9'))
		i++;
	value = 0;
	while (str[i])
	{
		nb = str[i] - '0';
		value = (value * 10) + nb;
		i++;
		
	}
	return (value * positive);
}
