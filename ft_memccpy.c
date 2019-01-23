#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t			i;
	unsigned char	*desti;
	unsigned char	*source;

	i = 0;
	source = (unsigned char *)s2;
	desti = (unsigned char *)s1;
	while (i < n)
	{
		desti[i] = source[i];
		if (source[i] == (unsigned char)c)
			return (s1 + i + 1);
		i++;
	}
	return (NULL);
}
