#include "libft.h"

void *ft_memcpy(void *d, const void *s, size_t n)
{
    unsigned char *d;
    unsigned char *s;

    dst = (unsigned char *) d;
    src = (unsigned char *) s;
    
    if (d == NULL && s == NULL)
        return (d);
    while (n-- > 0)
        *(dst++) = *(src++);
    return(d)
}