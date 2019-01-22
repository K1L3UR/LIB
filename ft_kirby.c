#include "libft.h"

void	ft_putby(char c)
{
	write (1, &c, 1);
}

void	ft_putkirby(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putby(str[i]);
		i++;
	}
}

void	ft_kirby()
{
	ft_putkirby("(>'-')> <('-'<) ^('-')^ v('-')v(>'-')> (^-^)");
	ft_putby('\n');
}
