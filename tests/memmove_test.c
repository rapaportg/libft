#include "../ft_memmove.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[500] = "Hello, world";
    printf("\nBefore memmove: %s", str);

    ft_memmove(str+6, str, (size_t)strlen(str)+1);

    printf("\nAfter memmove: %s", str);

    return 0;
}