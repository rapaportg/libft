#include <stdio.h>
#include "../ft_strdup.c"

int main()
{
    char *s1 = "Hello, World";
    char *s2;

    s2 = ft_strdup(s1);

    printf("\nOriginal: %s\nDup: %s\n", s1, s2);
    return 0;
}