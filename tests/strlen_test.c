#include <stdio.h>
#include <string.h>
#include "../ft_strlen.c"

int main()
{
    char *s = "Hello, World!";

    printf("s = %s \nstrlen(s) = %zu \nft_strlen(s) = %zu \n", s, strlen(s), ft_strlen(s));
    return 0;
}