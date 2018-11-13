#include "libft.h"

int	main(int argc, char **argv)
{
	char	str_memset[50];
	char	str_bzero[50];
	char	src_memcpy[50] = "it work if u see it";
	char	dest_memcpy[50];
	char	src_memccpy[50] = "idk what im doing";
	char	dest_memccpy[50];
	char	s1_memmove[50] = "oldstring";
	char	s2_memmove[50] = "newstring";
	char	s1_memchr[50] = "im a string with a hiden character z";
	char	to_find = 'z';

	if (argc == 0)
		return (0);
/*	printf("%s\n", "ft_memset ---------------------------------");
	strcpy(str_memset,"je suis une chaine de caracteres de memset");
	puts(str_memset);
	ft_memset(str_memset, '#', 10);
	puts(str_memset);
	printf("%s\n", "ft_bzero ----------------------------------");
	strcpy(str_bzero,"je suis une chaine de caracteres de bzero");
	puts(str_bzero);
	ft_bzero(str_bzero, 3);
	puts(str_bzero);
	strcpy(dest_memcpy, "test");
	printf("before ft_memcpy : %s\n", dest_memcpy);
	ft_memcpy(dest_memcpy, src_memcpy, 20);
	printf("after ft_memcpy : %s\n", dest_memcpy);
	printf("Before memmove dest = %s, src = %s\n", s1_memmove, s2_memmove);
	ft_memmove(s1_memmove, s2_memmove, 8);
	printf("After memmove dest = %s, src = %s\n", s1_memmove, s2_memmove);
*/
	ft_memchr(s1_memchr, to_find, 0);
	return(0);
}
