#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdio.h>
# include <math.h>
# include <fcntl.h>

void	*ft_memset(void	*ptr, int c, size_t n);
void	ft_bzero(void *ptr, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *ptr1, const void *ptr2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);

# endif
