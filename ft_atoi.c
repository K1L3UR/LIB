int	ft_atoi(const char *s)
{
	int i;
	int neg;
	int nbr;

	nbr = 0;
	i = 0;
	neg = 0;
	while ((s[i] >= 8 && s[i] <= 14) || (s[i] == ' '))
		i++;	
	if (s[i] == '-')
		neg = 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	while (s[i] && (s[i] >= '0') && (s[i] <= '9'))
	{
		nbr = nbr * 10 + (int)(s[i] - '0');
		i++; 
	}
	if (neg == 1)
		return (-nbr);
	else
		return (nbr);
}
