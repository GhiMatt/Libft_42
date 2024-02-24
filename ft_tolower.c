#include "libft.h"

int ft_tolower(int k)
{
    if(k >= 65 && k <= 90)
    return (k + 32);
    else
    return(k);
}