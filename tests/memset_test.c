#include "../ft_memset.c"
#include "stdio.h"

int main()
{
    char str[10] = "1234567890";
    printf("\nBefore memset(): %s\n", str);

    ft_memset(str+3, '.', 4*sizeof(char));

    printf("\nAfter memset(): %s\n", str);
    return (0);
}