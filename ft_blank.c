#include "libft.h"

int	ft_blank(char c)
{
	if (c == ' ')
		return (c);
	else if (c == '\t')
		return (c);
	else if (c == '\n')
		return (c);
	return (-1);
}
