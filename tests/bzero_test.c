#include "libft.h"
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
    char *ptr = test;

    printf("\n\n%ld\n\n", );
    printf("\nsize of test: %d\n", (int)sizeof(test));

    bzero_test(test);
}