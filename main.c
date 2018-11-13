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
	char	to_find = 'x';
	char	s1_memcmp[50] = "abcdefghijklmnopqrstuvwxyz";
	char	s2_memcmp[50] = "zyxw";
	char	s3_memcmp[50] = "123";
	char	s4_memcmp[50] = "987";
	char	s5_memcmp[50] = "9";
	char	s6_memcmp[50] = "9";
	char	s1_strlen[50] = "bonjour je suis uen chaine de caracteres";
	char	s2_strlen[50] = "5354";
	char	s3_strlen[50] = "";
	char	s4_strlen[50] = "p";
	char	s1_strdup[50] = "bondour bondour";
	char	s2_strdup[50] = "oni chan yamero";

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
	printf("%s\n", "ft_memcpy ----------------------------------");
	strcpy(dest_memcpy, "test");
	printf("before ft_memcpy : %s\n", dest_memcpy);
	ft_memcpy(dest_memcpy, src_memcpy, 20);
	printf("after ft_memcpy : %s\n", dest_memcpy);
	printf("%s\n", "ft_memmove ----------------------------------");
	printf("Before memmove dest = %s, src = %s\n", s1_memmove, s2_memmove);
	ft_memmove(s1_memmove, s2_memmove, 8);
	printf("After memmove dest = %s, src = %s\n", s1_memmove, s2_memmove);
	printf("%s\n", "ft_memchr ----------------------------------");
	printf("%s\n", ft_memchr(s1_memchr, to_find, 40));
	printf(" %s\n", "ft_memcmp ----------------------------------");
	printf("mine : %d\n", ft_memcmp(s1_memcmp, s2_memcmp, 30));
	printf("mine : %d\n", ft_memcmp(s3_memcmp, s4_memcmp, 30));
	printf("mine : %d\n", ft_memcmp(s5_memcmp, s6_memcmp, 30));
	printf("%d\n", memcmp(s1_memcmp, s2_memcmp, 30));
	printf("%d\n", memcmp(s3_memcmp, s4_memcmp, 30));
	printf("%d\n", memcmp(s5_memcmp, s6_memcmp, 30));
	printf(" %s\n", "ft_strlen ----------------------------------");
	printf("mine : %zu\n", ft_strlen(s1_strlen));
	printf("mine : %zu\n", ft_strlen(s2_strlen));
	printf("mine : %zu\n", ft_strlen(s3_strlen));
	printf("mine : %zu\n", ft_strlen(s4_strlen));
	printf("%zu\n", strlen(s1_strlen));
	printf("%zu\n", strlen(s2_strlen));
	printf("%zu\n", strlen(s3_strlen));
	printf("%zu\n", strlen(s4_strlen));
*/	
	printf(" %s\n", "ft_strdup ----------------------------------");
	printf("mine : %s\n", ft_strdup(s1_strdup));
	printf("mine : %s\n", ft_strdup(s2_strdup));
	printf("%s\n", strdup(s1_strdup));
	printf("%s\n", strdup(s2_strdup));
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return(0);
	}
