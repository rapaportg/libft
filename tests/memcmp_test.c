#include <stdio.h>
#include "../ft_memcmp.c"

int main()
{
    char *s1 = "Hello, World";
    char *s2 = "Hello, world";

    printf("String 1: %s\nString 2: %s\n", s1, s2);
    printf("%i\n", ft_memcmp(s1, s2, sizeof(s1)));

    return 0;
}
