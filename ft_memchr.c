#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;
	char	*s1;
	int	p;
	
	i = 0;
	s1 = (char*)s;
	while (i < n)
	{
		if (s1[i] == c)
			return(s1);
		i++;
	}
	return (s1);
}
