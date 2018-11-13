#include "libft.h"

void	*ft_memset(void *ptr, int b, size_t n)
{
	unsigned char *conv;

	if (n == 0)
		return (NULL);
	conv = (unsigned char*)ptr;
	while (n--)
	{
		*conv = (unsigned char)b;
		if (n)
			conv++;
	}
	return (ptr);
}
