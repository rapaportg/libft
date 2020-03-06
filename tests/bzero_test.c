#include "../ft_bzero.c"
#include "stdio.h"
#include "stdlib.h"

int main()
{
    char *test = malloc(256);
    printf("%s", test);
}