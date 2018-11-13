#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int	i;
	char	*s1;
	char	*s2;

	i = 0;
	s1 = (char *)dest;
	s2 = (char *)src;
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
		if (s2[i] == c)
			return (dest);
	}
	return (dest);
}
