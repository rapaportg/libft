#include <stdio.h>
#include "../ft_strcpy.c"

int main()
{
    char *s = "Hello, World";
    char d[100];

    ft_strcpy(d,s);

    printf("%s", d);
    return 0;
}