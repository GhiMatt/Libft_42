#include "libft.h"

int ft_isalnum(char k)
{
    if((k >= 48 && k <= 57) || (k >= 65 && k <= 90) || (k >= 97 && k <= 122) )
    return (1);
    else
    return(0);
}