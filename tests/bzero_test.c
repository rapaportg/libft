#include "../ft_bzero.c"
#include "stdio.h"
#include "stdlib.h"


void bzero_test(char *tmp)
{
  ft_bzero(tmp, 256);
  printf("Test of bzero\n%s", tmp);

}

int main()
{
    char *test = malloc(256);
    bzero_test(test);
}