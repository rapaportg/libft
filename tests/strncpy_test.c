#include <stdio.h>
#include "../ft_strncpy.c"
#include "../ft_strcpy.c"
#include <string.h>

int main()
{
    char *s = "Hello, World";
    char d[100];
    char c[100];


    ft_strcpy(c, s);
    printf("%s\n", c);

    // strncpy(d, s, 5);
    // printf("\n%s\n", d);

    ft_strncpy(d, s, 5);
    printf("\n%s\n", d);

    
}