#include "libft.h"

void	ft_bzero(void *g, size_t n)
{
	ft_memset(g, '\0', n);
}