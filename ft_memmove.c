#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	int	i;
	char	*s1;
	char	*s2;

	i = 0;
	s1 = (char*)str1;
	s2 = (char*)str2;
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (str1);
}
