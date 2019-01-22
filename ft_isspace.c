#include "libft.h"

int	ft_isspace(int c)
{
	if (ft_blank(c) != -1)
		return (c);
	else if (c == '\r')
		return (c);
	else if (c == '\v')
		return (c);
	else if (c == '\f')
		return (c);
	return (-1);
}
