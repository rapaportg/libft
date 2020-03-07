#include "../ft_strcat.c"
#include <stdio.h>

int main()
{
    char s1[100] = "Hello World";
    char s2[100] = "My Name is Jeff";

    printf("\n%s\n", ft_strcat(s1, s2));

}