#include "libft.h"

int ft_toupper(int k)
{
    if(k >= 97 && k <= 122)
    return (k - 32);
    else
    return(k);
}